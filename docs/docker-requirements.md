# Docker Architecture and Requirements

## Containers
- PostgreSQL database container (official postgres image)
- C++ application container (custom Dockerfile)

## Docker Compose Architecture
- Two services: postgres, app
- Private bridge network
- Named volume for PostgreSQL data persistence
- Environment variables for DB connection

## Image Naming Convention
- [respectbeko162]/sis-project-postgres
- [respectbeko162]/sis-project-app

## Port Strategy
- PostgreSQL: internal access only
- Application: CLI-based, no external ports

## Health Checks (Planned)
- PostgreSQL readiness check
- Application startup validation

## Resource Limits (Planned)
- CPU limits per container
- Memory limits per container

## Docker Hub (Week 2)

The C++ application container image was successfully built and pushed to Docker Hub.

- Image: respectbeko162/sis-project-app
- Tag: latest
- Registry: Docker Hub
- Status: Public

This image will be reused in the CI/CD pipeline during automated builds in later weeks.
