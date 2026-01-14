#include <iostream>
#include <postgresql/libpq-fe.h>
#include <cstdlib>

void listStudents(PGconn* conn) {
    PGresult* res = PQexec(conn, "SELECT id, name, email FROM students;");

    if (PQresultStatus(res) != PGRES_TUPLES_OK) {
        std::cerr << "Query failed: " << PQerrorMessage(conn) << std::endl;
        PQclear(res);
        return;
    }

    int rows = PQntuples(res);
    if (rows == 0) {
        std::cout << "No students found.\n";
    } else {
        std::cout << "\n--- Students ---\n";
        for (int i = 0; i < rows; i++) {
            std::cout
                << "ID: " << PQgetvalue(res, i, 0)
                << " | Name: " << PQgetvalue(res, i, 1)
                << " | Email: " << PQgetvalue(res, i, 2)
                << "\n";
        }
    }

    PQclear(res);
    std::cout << std::flush;
}

int main() {
    std::cout << "Student 3 code running" << std::endl;

    const char* host = std::getenv("DB_HOST");
    const char* port = std::getenv("DB_PORT");
    const char* user = std::getenv("DB_USER");
    const char* password = std::getenv("DB_PASSWORD");
    const char* dbname = std::getenv("DB_NAME");

    if (!host || !port || !user || !password || !dbname) {
        std::cerr << "Missing database environment variables.\n";
        return 1;
    }

    std::string conninfo =
        "host=" + std::string(host) +
        " port=" + std::string(port) +
        " user=" + std::string(user) +
        " password=" + std::string(password) +
        " dbname=" + std::string(dbname);

    PGconn* conn = PQconnectdb(conninfo.c_str());

    if (PQstatus(conn) != CONNECTION_OK) {
        std::cerr << "Database connection failed: "
                  << PQerrorMessage(conn) << std::endl;
        PQfinish(conn);
        return 1;
    }

    std::cout << "Student Information System\n";
    std::cout << "Connected to database successfully\n" << std::flush;

    while (true) {
        std::cout << "\n===== MENU =====\n";
        std::cout << "1. List Students\n";
        std::cout << "2. Exit\n";
        std::cout << "Select option: " << std::flush;

        int choice;
        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Try again.\n" << std::flush;
            continue;
        }

        if (choice == 1) {
            listStudents(conn);
        } 
        else if (choice == 2) {
            std::cout << "Exiting...\n" << std::flush;
            break;
        } 
        else {
            std::cout << "Invalid option. Try again.\n" << std::flush;
        }
    }

    PQfinish(conn);
    return 0;
}
