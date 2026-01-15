CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
LIBS = -lpq

TARGET = sis_app
SRC = src/main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET) $(LIBS)

clean:
	rm -f $(TARGET)