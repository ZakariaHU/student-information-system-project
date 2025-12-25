FROM ubuntu:22.04

RUN apt-get update && \
    apt-get install -y g++ libpq-dev && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY src/main.cpp .

RUN g++ main.cpp -o app -lpq

CMD ["./app"]

