#include "database/db_connection.hpp"
#include <pqxx/pqxx>
#include <iostream>

DBConnection::DBConnection(const std::string& conn_str)
    : connection_string(conn_str) {}

bool DBConnection::connect() {
    try {
        pqxx::connection conn(connection_string);
        std::cout << "Database connected successfully\n";
        return conn.is_open();
    } catch (const std::exception& e) {
        std::cerr << "Connection failed: " << e.what() << std::endl;
        return false;
    }
}
