# Target to compile the C++ program
greatest_number : greatest_number.o
	g++ greatest_number.o -o greatest_number

# Target to compile the object file
greatest_number.o : greatest_number.cpp
	g++ -c greatest_number.cpp -o greatest_number.o

# Target to run the program
run : greatest_number
	./greatest_number

# Target to clean up compiled files
clean :
	rm -f greatest_number.o greatest_number