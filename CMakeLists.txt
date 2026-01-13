cmake_minimum_required(VERSION 3.10)
project(sis_app)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(sis_app
    main.cpp
    src/student_repository.cpp
)
