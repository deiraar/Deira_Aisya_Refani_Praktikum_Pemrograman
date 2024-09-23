# Target to compile the C++ program
reverse_array : reverse_array.o
	g++ reverse_array.o -o reverse_array

# Target to compile the object file
reverse_array.o : reverse_array.cpp
	g++ -c reverse_array.cpp -o reverse_array.o

# Target to run the program
run : reverse_array
	./reverse_array

# Target to clean up compiled files
clean :
	rm -f reverse_array.o reverse_array