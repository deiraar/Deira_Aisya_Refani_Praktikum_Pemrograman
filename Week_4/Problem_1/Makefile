# Target to compile the C++ program
multiplication_table : sum_of_natural_numbers.o
	g++ sum_of_natural_numbers.o -o sum_of_natural_numbers

# Target to compile the object file
multiplication_table.o : multiplication_table.cpp
	g++ -c sum_of_natural_numbers.cpp -o sum_of_natural_numbers.o

# Target to run the program
run : sum_of_natural_numbers
	./sum_of_natural_numbers

# Target to clean up compiled cd Week_4
clean :
	rm -f sum_of_natural_numbers.o sum_of_natural_numbers
