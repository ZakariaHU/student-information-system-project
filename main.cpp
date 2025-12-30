#include <iostream>
#include "student_repository.hpp"

int main() {
    StudentRepository repo;

    repo.add_student("Ali");
    repo.add_student("Omar");

    repo.read_students();

    repo.update_student(1, "Ahmed");
    repo.delete_student(2);

    repo.read_students();
    return 0;
}
