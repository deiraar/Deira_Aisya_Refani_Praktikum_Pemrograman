#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib> // For std::atoi
using namespace std;

int main() {
    // Open the file "test.txt" for reading
    ifstream testFile("test.txt");

    // Check if the file could not be opened
    if (!testFile) {
        cerr << "Error: Could not open test.txt" << endl;
        return 1; // Exit the program with error code 1
    }

    // Header
    cout << "----------------------------" << endl;
    cout << "Payslip for Employee Program" << endl;
    cout << "----------------------------" << endl;

    string line;
    int test_num = 1; // Test case number

    // Read each line from the file
    while (getline(testFile, line)) {
        // Create a string stream to process the line
        istringstream iss(line);

        string name;           // Employee name
        int gross_salary;      // Gross salary
        int installment;       // Installment amount
        int insurance;         // Insurance amount
        string expected_output; // Expected output for this test case

        // Read the test case data from the line
        if (!(iss >> name >> gross_salary >> installment >> insurance)) {
            cerr << "Error: Invalid data format in test case " << test_num << endl;
            break; // Stop processing on error
        }

        // Read the rest of the line as the expected output (it might contain spaces)
        getline(iss, expected_output);
        expected_output = expected_output.substr(1); // Remove leading space from the rest of the line

        string output; // String to store the program's output

        // Check for negative values and generate appropriate error message
        if (gross_salary < 0 || installment < 0 || insurance < 0) {
            output = "Please input the right amount.";
        } else {
            // Calculate tax (20% of gross salary)
            int tax = 0.2 * gross_salary;

            // Calculate net salary
            int net_salary = gross_salary - tax - installment - insurance;

            if (net_salary < 0) {
                // If net salary is negative, set the output to the error message
                output = "Insufficient amount of net salary, please input the right amount.";
            } else {
                // Generate output with the calculated net salary
                output = "Rp" + to_string(net_salary);
            }
        }

        // Compare the generated output with the expected output
        if (output == expected_output) {
            cout << "Test " << test_num << " passed!" << endl;
        } else {
            cout << "Test " << test_num << " failed." << endl;
            cout << "Expected: \"" << expected_output << "\"" << endl;
            cout << "Got: \"" << output << "\"" << endl;
        }

        test_num++; // Increment test case number
        cout << "----------------------------" << endl; // Separator between test cases
    }

    testFile.close(); // Close the file after reading all test cases
    return 0; // Exit the program successfully
}

