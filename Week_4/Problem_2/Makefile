# Target to compile the C++ program
multiplication_table : multiplication_table.o
	g++ multiplication_table.o -o multiplication_table

# Target to compile the object file
multiplication_table.o : multiplication_table.cpp
	g++ -c multiplication_table.cpp -o multiplication_table.o

# Target to run the program
run : multiplication_table
	./multiplication_table

# Target to clean up compiled files
clean :
	rm -f multiplication_table.o multiplication_table
