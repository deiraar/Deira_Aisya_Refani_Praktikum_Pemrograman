#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

void addition(int a, int b, int &result);    // Addition function
void substraction(int a, int b, int &result); // Substraction function

int main()
{
    // Header
    cout << "--------------------------" << endl;
    cout << "Mathematic Operation Tests" << endl;
    cout << "--------------------------" << endl;
    // Open the test file
    ifstream infile("test.txt");
    if (!infile) {
        cerr << "Unable to open file test.txt";
        return 1; // Exit if file cannot be opened
    }

    int a, b, expected_addition, expected_substraction;

    // Read each line from the file
    while (infile >> a >> b >> expected_addition >> expected_substraction) {
        int actual_addition, actual_substraction;

        // Call functions and store results
        addition(a, b, actual_addition);
        substraction(a, b, actual_substraction);

        if (actual_addition == expected_addition && actual_substraction == expected_substraction) {
            cout << "Test Passed!" << endl;
        } else {
            cout << "Test Failed!" << endl;
        }
    }

    cout << "--------------------------" << endl;

    infile.close();
    return 0;
}

void addition(int a, int b, int &result)
{
    result = a + b; // Calculate addition
}

void substraction(int a, int b, int &result)
{
    result = a - b; // Calculate substraction
}
