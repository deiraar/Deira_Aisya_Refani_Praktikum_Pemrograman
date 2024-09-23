# Target to compile the C++ program
payslip : payslip.o
	g++ payslip.o -o payslip

# Target to compile the object file
payslip.o : payslip.cpp
	g++ -c payslip.cpp -o payslip.o

# Target to run the program
run : payslip
	./payslip

# Target to clean up compiled files
clean :
	rm -f payslip.o payslip
