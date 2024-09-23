# Target to compile the C++ program
payslip : quadratic_equation.o
	g++ quadratic_equation.o -o quadratic_equation

# Target to compile the object file
payslip.o : quadratic_equation.cpp
	g++ -c quadratic_equation.cpp -o quadratic_equation.o

# Target to run the program
run : quadratic_equation
	./quadratic_equation

# Target to clean up compiled files
clean :
	rm -f quadratic_equation.o quadratic_equation