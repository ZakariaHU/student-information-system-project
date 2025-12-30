cmake_minimum_required(VERSION 3.10)
project(sis_project)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(sis_app
    main.cpp
    src/student_repository.cpp
)
