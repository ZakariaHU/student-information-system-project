# student information system (Docker-based)

## course
System Programming

## project desciption
this project is a docker-based Student Information System developed using C++ and PostgreSQL.
The system allows users to perform basic CRUD operations on student data through a command-line interface.
 
## Technologies
- C++
- PostgreSQL
- Docker and Docker Compose
- Ubuntu
- Git and Github

## Team Members
- Zakaria Hussein - Project Manager
- Salih Berke - Docker and DevOps Engineer
- Ramez Akkila - C++ Developer

 feature/week2-docker-compose-ci
=======
## Week 1 – Project Setup & Planning
- GitHub repository created and initialized
- Team members added and roles assigned
- Project structure planned
- Initial issues created and organized on GitHub Projects
- Milestones defined for weekly tasks
- Licensing decided (MIT / Apache 2.0)
- Contribution and workflow strategy discussed
- Communication and task tracking established via GitHub Issues and Projects

 develop
## Week 2 Progress
- Docker Compose setup completed
- PostgreSQL container configured
- C++ application container built successfully
- Containers communicate via internal Docker network
- CI/CD pipeline planning initiated (GitHub Actions)
- Database schema and connection logic planned for Week 3

##Week 3 Progress

- PostgreSQL database schema designed and implemented
- Core tables created (students, courses, enrollments)
- SQL initialization script (database/init.sql) added
- Database automatically initialized on container startup
- C++ application connected to PostgreSQL using libpq
- Environment variables used for secure DB configuration
- Successful database connection verified from C++ application
- Test SQL query executed from C++ (SELECT * FROM students)
- End-to-end integration validated using Docker Compose
<<<<<<< HEAD
- Application and database services confirmed working together
=======
- Application and database services confirmed working together

## Week 4 Progress
- Implemented full CRUD operations in C++
- Insert, select, update, and delete queries tested
- Application lifecycle improved with interactive loop
- Docker Compose updated for restart handling
- Database interactions verified through logs
>>>>>>> 7aa8639 (Week 4: add CRUD operations and improve container lifecycle)
