#include "student_repository.hpp"
#include <pqxx/pqxx>
#include <iostream>

void StudentRepository::get_students() {
    pqxx::connection conn("dbname=sis_db user=postgres");
    pqxx::work txn(conn);

    auto result = txn.exec("select * from students");

    for (auto row : result) {
        std::cout << row["id"].as<int>() << " "
                  << row["name"].as<std::string>() << " "
                  << row["age"].as<int>() << std::endl;
    }
}
