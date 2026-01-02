cmake_minimum_required(VERSION 3.10)

project(sis_app)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(sis_app src/main.cpp)

find_package(PostgreSQL REQUIRED)
target_link_libraries(sis_app PostgreSQL::PostgreSQL)

