#ifndef STUDENT_REPOSITORY_HPP
#define STUDENT_REPOSITORY_HPP

#include <pqxx/pqxx>
#include <string>

class StudentRepository {
private:
    pqxx::connection conn;

public:
    StudentRepository();
    void add_student(const std::string& name);
    void read_students();
    void update_student(int id, const std::string& name);
    void delete_student(int id);
};

#endif
