#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    // Open the file "test.txt" for reading
    ifstream testFile("test.txt");

    // Check if the file could not be opened
    if (!testFile) {
        cerr << "Error: Could not open test.txt" << endl;
        return 1; // Exit the program with error code 1
    }
    
    // Header
    cout << "----------------------------" << endl;
    cout << "   FizzBuzz with Vectors" << endl;
    cout << "----------------------------" << endl;

    vector<string> results; // Vector to store the results

    // Loop from 1 to 100
    for (int i = 1; i <= 100; i++) {
        // Check for multiples of 3 and 5
        if (i % 3 == 0 && i % 5 == 0) {
            results.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            results.push_back("Fizz");
        } else if (i % 5 == 0) {
            results.push_back("Buzz");
        } else {
            results.push_back(to_string(i)); // Convert number to string
        }
    }

    // Read expected results from the file
    vector<string> expectedResults;
    string line;
    while (getline(testFile, line)) {
        expectedResults.push_back(line);
    }

    // Check if output matches expected results
    bool passed = true;
    for (size_t i = 0; i < results.size(); i++) {
        if (i < expectedResults.size()) {
            if (results[i] != expectedResults[i]) {
                passed = false;
                cout << "Failed at " << (i + 1) << ": Expected \"" << expectedResults[i] 
                     << "\", but got \"" << results[i] << "\"" << endl;
            }
        }
    }

    // Print overall result
    if (passed) {
        cout << "All tests passed!" << endl;
    } else {
        cout << "Some tests failed." << endl;
    }

    // Footer
    cout << "----------------------------" << endl;

    return 0;
}
