CXX = clang++
CXXFLAGS = -Wall -std=c++17 
LFLAGS = -Xall

SRCS = Main.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = testFW

.PHONY: all
all: $(TARGET)
.PHONY: clean
clean:
	rm -rf *.o

$(TARGET): $(OBJS)
	$(CXX) $(LFLAGS) $(OBJS) -o $@

.cpp.o: 
	$(CXX) $(CFLAGS) $< -o $@
