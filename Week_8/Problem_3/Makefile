# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = 3_change_data
TARGETTEST = 3_change_data_test
SRC = 3_change_data.cpp
SRCTEST = 3_change_data_test.cpp

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