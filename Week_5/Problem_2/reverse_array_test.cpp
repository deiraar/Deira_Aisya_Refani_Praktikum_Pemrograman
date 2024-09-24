#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

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
    cout << "-----------------------------" << endl;
    cout << "  Reverse An Array Program" << endl;
    cout << "-----------------------------" << endl;

    string line;

    // Read multiple test cases from the file
    while (getline(testFile, line)) {
        stringstream ss(line);
        vector<int> vec;
        vector<int> expectedResults;
        int n, value;

        // Input number of elements
        ss >> n; // Read the first number
        // Input elements into the vector
        for (int i = 0; i < n; ++i) {
            ss >> value; // Read each integer
            vec.push_back(value);
        }

        // Read expected results from the line
        for (int i = 0; i < n; ++i) {
            ss >> value; // Read each expected result
            expectedResults.push_back(value);
        }

        // Reverse the vector
        for (int i = 0; i < n / 2; ++i) {
            swap(vec[i], vec[n - 1 - i]);
        }

        // Check if output matches expected results
        bool passed = true;
        if (expectedResults.size() != vec.size()) {
            passed = false;
        } else {
            for (size_t i = 0; i < vec.size(); ++i) {
                if (vec[i] != expectedResults[i]) {
                    passed = false;
                    break;
                }
            }
        }

        // Print overall result for this test case
        if (passed) {
            cout << "Test Passed!" << endl;
        } else {
            cout << "Test Failed!" << endl;
            cout << "Expected: ";
            for (const auto& val : expectedResults) {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    // Footer
    cout << "-----------------------------" << endl;

    return 0;
}
