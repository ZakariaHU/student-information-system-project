#include <iostream>
#include "student_repository.hpp"

int main() {
    StudentRepository repo;
    repo.add_student("Ali");
    repo.add_student("Ahmed");

    repo.read_students();
    return 0;
}
