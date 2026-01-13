void StudentRepository::update_student(int id, const std::string& name, int age) {
    pqxx::work txn(conn);
    txn.exec("UPDATE students SET name = " + txn.quote(name) +
             ", age = " + txn.quote(age) +
             " WHERE id = " + txn.quote(id));
    txn.commit();
}

void StudentRepository::delete_student(int id) {
    pqxx::work txn(conn);
    txn.exec("DELETE FROM students WHERE id = " + txn.quote(id));
    txn.commit();
}
