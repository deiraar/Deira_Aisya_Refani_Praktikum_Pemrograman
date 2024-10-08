#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

// Function to remove leading and trailing spaces, tabs, and newlines from a string
string trim(const string& str) {
    size_t first = str.find_first_not_of(" \t\r\n");
    size_t last = str.find_last_not_of(" \t\r\n");
    return (first == string::npos) ? "" : str.substr(first, (last - first + 1));
}

int main() {
    // Open the file "test.txt" for reading
    ifstream testFile("test.txt");

    // Check if the file could not be opened
    if (!testFile) {
        cerr << "Error: Could not open test.txt" << endl;
        return 1; // Exit the program with error code 1
    }

    // Print program header
    cout << "--------------------------" << endl;
    cout << "Quadratic Equation Program" << endl;
    cout << "--------------------------" << endl;

    string line; // String to hold each line read from the file
    int test_num = 1; // Variable to keep track of the test case number

    // Read the file line by line
    while (getline(testFile, line)) {
        istringstream coeffStream(line); // Create a string stream from the line
        int a, b, c; // Variables to store the coefficients of the quadratic equation

        // Try to read the coefficients (a, b, c) from the line
        if (!(coeffStream >> a >> b >> c)) {
            cerr << "Error: Failed to read coefficients for test " << test_num << endl;
            break; // Exit the loop if reading fails
        }

        // Read the next line which should contain the expected output
        if (!getline(testFile, line)) {
            cerr << "Error: Expected output not found for test " << test_num << endl;
            break; // Exit the loop if the expected output line is missing
        }

        // Remove extra spaces and newlines from the expected output
        string expected_output = trim(line);

        // Calculate the discriminant: b^2 - 4ac
        int discriminant = (pow(b, 2)) - (4 * a * c);
        string output; // String to store the actual output generated by the program

        // Set output precision to 6 decimal places
        cout << fixed << setprecision(6);
        
        // Check the nature of roots based on the discriminant value
        if (discriminant > 0) {
            // Two distinct real roots
            float x1 = (-b + sqrt(discriminant)) / (2 * a);
            float x2 = (-b - sqrt(discriminant)) / (2 * a);
            output = "There are two distinct real roots: x1 = " + to_string(x1) + ", x2 = " + to_string(x2);
        } else if (discriminant == 0) {
            // One real root
            float x = -b / (2 * a);
            output = "There is exactly one real root: x = " + to_string(x);
        } else {
            // No real roots
            output = "There are no real roots.";
        }

        // Remove extra spaces and newlines from the generated output
        string trimmed_output = trim(output);

        // Compare the generated output with the expected output
        if (trimmed_output == expected_output) {
            // If they match, the test passes
            cout << "Test " << test_num << " passed!" << endl;
        } else {
            // If they don't match, the test fails
            cout << "Test " << test_num << " failed." << endl;
        }

        test_num++; // Increment the test number for the next case
        cout << "--------------------------" << endl; // Print a separator
    }

    testFile.close(); // Close the file after reading all the tests
    return 0; // Exit the program successfully
}