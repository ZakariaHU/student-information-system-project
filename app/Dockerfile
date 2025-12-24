FROM ubuntu:22.04

RUN apt-get update && \
    apt-get install -y g++ cmake libpq-dev && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY . .

RUN g++ main.cpp -o app -lpq

CMD ["./app"]

