#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

// Meeting 3 Homework
// Find The Greatest Number Program

int main() {
    // Open the file "test.txt" for reading
    ifstream testFile("test.txt");

    // Check if the file could not be opened
    if (!testFile) {
        cerr << "Error: Could not open test.txt" << endl;
        return 1; // Exit the program with error code 1
    }
    
    // Header
    cout << "--------------------------------" << endl;
    cout << "Find The Greatest Number Program" << endl;
    cout << "--------------------------------" << endl;

    string line;
    int test_num = 1;

    // Read each line from the test file
    while (getline(testFile, line)) {
        // Create a string stream to process the line
        istringstream iss(line);

        int number_1, number_2, number_3, expected_greatest;
        // Read the test case data from the line
        if (!(iss >> number_1 >> number_2 >> number_3 >> expected_greatest)) {
            cerr << "Error: Invalid data format in test case " << test_num << endl;
            break; // Stop processing on error
        }

        // Determine the greatest number
        int greatest;
        if (number_1 > number_2) {
            if (number_1 > number_3) {
                greatest = number_1;
            } else {
                greatest = number_3;
            }
        } else {
            if (number_2 > number_3) {
                greatest = number_2;
            } else {
                greatest = number_3;
            }
        }

        // Compare calculated greatest with expected greatest
        if (greatest == expected_greatest) {
            cout << "Test " << test_num << " passed!" << endl;
        } else {
            cout << "Test " << test_num << " failed." << endl;
            cout << "Expected: " << expected_greatest << ", Got: " << greatest << endl;
        }

        test_num++;
        cout << "--------------------------------" << endl;
    }

    // Close the file
    testFile.close();

    return 0;
}
