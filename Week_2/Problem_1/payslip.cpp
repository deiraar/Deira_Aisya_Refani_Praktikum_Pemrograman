#include <iostream>
#include <fstream>

using namespace std;

// Meeting 2 Homework
// Problem 1

int main()
{
    ofstream testFile("test.txt", ios::app); // Open file in append mode

    if (!testFile) 
    {
        cout << "Error: Could not open test.txt" << endl;
        return 1;
    }

    string name; // declare a string variable for the employee name
    int gross_salary, installment, insurance, tax, net_salary; // declare integer variables for financial amounts
    
    // Header
    cout << "----------------------------" << endl;
    cout << "Payslip for Employee Program" << endl;
    cout << "----------------------------" << endl;

    // add header to txt file
    testFile << "----------------------------" << endl;
    testFile << "Payslip for Employee Program" << endl;
    testFile << "----------------------------" << endl;

    cout << "Name: "; // print "Name: "
    getline(cin, name); // input name (string)
    testFile << "Name: " << name << endl; // save name to file

    cout << "Gross Salary: Rp"; // print "Gross Salary: Rp"
    cin >> gross_salary; // input gross_salary (integer)
    testFile << "Gross Salary: Rp" << gross_salary << endl; // save gross_salary to file

    tax = 0.2 * gross_salary; // tax calculation 20% from gross salary
    testFile << "Tax (20%): Rp" << tax << endl; // save tax to file
    cout << "Tax (20%): Rp" << tax << endl; // print tax to console

    cout << "Installment: Rp"; // print "Installment: Rp"
    cin >> installment; // input installment (integer)
    testFile << "Installment: Rp" << installment << endl; // save installment to file

    cout << "Insurance: Rp"; // print "Insurance: Rp"
    cin >> insurance; // input insurance (integer)
    testFile << "Insurance: Rp" << insurance << endl; // save insurance to file

    net_salary = gross_salary - tax - installment - insurance; // calculate net salary

    if (gross_salary < 0 || installment < 0 || insurance < 0) // check for negative inputs
    {
        cout << "Please input the right amount." << endl;
        testFile << "Please input the right amount." << endl; // save to file
        testFile << "----------------------------" << endl; // footer
    }
    else if (net_salary < 0) // check if net_salary is negative
    {
        cout << "Insufficient amount of net salary, please input the right amount." << endl;
        testFile << "Insufficient amount of net salary, please input the right amount." << endl; // save to file
        testFile << "----------------------------" << endl; // footer
    }
    else // if the net_salary is valid
    {
        cout << "Net Salary: Rp" << net_salary << endl; // print net salary
        testFile << "Net Salary: Rp" << net_salary << endl; // save net salary to file
        testFile << "----------------------------" << endl; // footer in file
    }

    testFile.close(); // Explicitly close the file to flush the buffer

    return 0; // File will be automatically closed when going out of scope
}
