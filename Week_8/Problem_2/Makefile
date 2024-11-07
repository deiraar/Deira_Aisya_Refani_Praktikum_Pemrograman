# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = 2_binary_search
TARGETTEST = 2_binary_search_test
SRC = 2_binary_search.cpp
SRCTEST = 2_binary_search_test.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the fizzbuzz.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up the compiled files
clean:
	rm -f $(TARGET)
	rm -f $(TARGETTEST)

test: ${TARGETTEST}

$(TARGETTEST): $(SRCTEST)
	$(CXX) $(CXXFLAGS) -o $(TARGETTEST) $(SRCTEST)
	./$(TARGETTEST)

# Phony targets to avoid conflicts
.PHONY: all clean test