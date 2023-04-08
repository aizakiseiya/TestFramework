CXX=clang++
CXXFLAGS=-Wall -std=c++17 
LFLAGS=-Wall

SRCS=main.cpp TestCase.cpp
OBJS=$(SRCS:.cpp=.o)
TARGET=test.o

.PHONY: all
all: $(SRCS) $(TARGET)

.PHONY: clean
clean:
	rm -rf *.o

$(TARGET): $(OBJS)
	$(CXX) $(LFLAGS) $(OBJS) -o $@

.cpp.o: 
	$(CXX) $(CFLAGS) -c $< -o $@
