#include<iostream>
using namespace std;

// Meeting 2 Homework
// Problem 1

int main()
{
    string name; // declare a string variable called name to save the employee name
    int gross_salary, installment, insurance, tax, net_salary; // declare some integer variables to save the amount of gross_salary, installment, insurance, tax, net_salary
    
    // Header
    cout << "----------------------------" << endl;
    cout << "Payslip for Employee Program" << endl;
    cout << "----------------------------" << endl;

    cout << "Name: "; // print "Name: "
    getline(cin, name); // input name (string), i use getline because when i used cin >> the string cannot received more than one word in my code so i try another solution

    cout << "Gross Salary: Rp"; // print "Gross Salary: Rp"
    cin >> gross_salary; // input gross_salary (integer)

    tax = 0.2 * gross_salary; // tax calculation 20% from gross salary
    cout << "Tax (20%): Rp" << tax << endl; // print "Tax (20%): Rp" + total amount of tax

    cout << "Installment: Rp"; // print "Installment: Rp"
    cin >> installment; // input installment (integer)

    cout << "Insurance: Rp"; // print "Insurance: Rp"
    cin >> insurance; // input insurance (integer)

    net_salary = gross_salary - tax - installment - insurance; // net salary formula

    if (net_salary < 0) // if net_salary is minus it means that one of the input does not make sense
    {
        cout << "Insufficient amount of net salary, please input the right amount." << endl;
        cout << "----------------------------" << endl; // footer
    }
    else // if the net_salary sufficient
    {
        if (gross_salary < 0) // Because there is no gross salary that is minus so if the input is minus it wil print this
        {
            cout << "Please input the right amount." << endl;
            cout << "----------------------------" << endl; // footer
        }
        else if (installment < 0) // Because there is no installment that is minus so if the input is minus it wil print this
        {
            cout << "Please input the right amount." << endl;
            cout << "----------------------------" << endl; // footer
        }
        else if (insurance < 0) // Because there is no insurance that is minus so if the input is minus it wil print this
        {
            cout << "Please input the right amount." << endl;
            cout << "----------------------------" << endl; // footer
        }
        else
        {
            cout << "Net Salary: Rp" << net_salary << endl; // print net salary
            cout << "----------------------------" << endl; // footer
        }
    }

    return 0;
}

// TEST CASES
// CASE 1 
// name = Deira Aisya
// gross_salary = 15000000
// installment = 200000
// insurance = 150000

// CASE 2
// name = Regina
// gross_salary = 12000000
// installment = -5000000
// insurance = -7000000

// CASE 3
// name = Praya
// gross_salary = 10000000
// installment = 6000000
// insurance = 2500000