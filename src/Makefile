CXX = clang++
CXXFLAGS = -Wall -std=c++17 
LFLAGS = -Wall

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = main 

.PHONY: all
all: $(TARGET)

.PHONY: clean
clean:
	rm -rf *.o

$(TARGET): $(OBJS)
	$(CXX) $(LFLAGS) $(OBJS) -o $@

.cpp.o: 
	$(CXX) $(CFLAGS) $< -o $@
