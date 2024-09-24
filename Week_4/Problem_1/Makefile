# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = sum_of_natural_numbers
TARGETTEST = sum_of_natural_numbers_test
SRC = sum_of_natural_numbers.cpp
SRCTEST = sum_of_natural_numbers_test.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the sum_of_natural_numbers.cpp
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
