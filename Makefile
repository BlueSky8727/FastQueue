ifeq ($(OS),Windows_NT)
    EXE := .exe
else
    EXE :=
endif

CXX = g++
CXXFLAGS = -Wall -std=c++17
OBJS = main.o FastArrayQueue.o FastLinkedQueue.o
TARGET = main$(EXE)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp FastArrayQueue.h FastLinkedQueue.h
	$(CXX) $(CXXFLAGS) -c main.cpp

FastArrayQueue.o: FastArrayQueue.cpp FastArrayQueue.h
	$(CXX) $(CXXFLAGS) -c FastArrayQueue.cpp

FastLinkedQueue.o: FastLinkedQueue.cpp FastLinkedQueue.h
	$(CXX) $(CXXFLAGS) -c FastLinkedQueue.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o $(TARGET)