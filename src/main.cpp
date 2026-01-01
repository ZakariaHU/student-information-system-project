#include <iostream>
#include <postgresql/libpq-fe.h>

int main() {
    const char* conninfo =
   	 "host=postgres "
   	 "port=5432 "
   	 "dbname=sisdb "
   	 "user=sisuser "
   	 "password=sispass";


    PGconn* conn = PQconnectdb(conninfo);

    if (PQstatus(conn) == CONNECTION_OK) {
        std::cout << "Connected to database successfully" << std::endl;
    } else {
        std::cerr << "Connection failed: "
                  << PQerrorMessage(conn) << std::endl;
        PQfinish(conn);
        return 1;
    }

    PGresult* res = PQexec(conn, "SELECT 1;");
    if (PQresultStatus(res) == PGRES_TUPLES_OK) {
        std::cout << "Query works!" << std::endl;
    }

    PQclear(res);
    PQfinish(conn);
    return 0;
}
