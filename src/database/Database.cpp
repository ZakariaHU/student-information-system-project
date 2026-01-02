#include <iostream>
#include <libpq-fe.h>

int main() {
    const char* conninfo =
        "host=postgres "
        "port=5432 "
        "dbname=sisdb "
        "user=sisuser "
        "password=sispass";

    PGconn* conn = PQconnectdb(conninfo);

    if (PQstatus(conn) != CONNECTION_OK) {
        std::cerr << "Connection failed: " << PQerrorMessage(conn);
        PQfinish(conn);
        return 1;
    }

    std::cout << "Connected to database successfully!" << std::endl;

    PQfinish(conn);
    return 0;
}
