#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int factorial(int x) {
    if (x < 0) {
        return -1; // Return -1 for negative input
    } else if (x == 0 || x == 1) {
        return 1; // 0! and 1! are both 1
    } else {
        int result = 1;
        for (int i = 2; i <= x; i++) {
            result *= i; // Calculate factorial
        }
        return result;
    }
}

int main() {
    // Open the test file
    ifstream infile("test.txt");
    if (!infile) {
        cerr << "Error opening test file." << endl;
        return 1;
    }

    int x, expected_output;
    string line;

    // Header
    cout << "-------------------------" << endl;
    cout << "    Factorial Tests" << endl;
    cout << "-------------------------" << endl;

    while (getline(infile, line)) {
        stringstream ss(line);
        ss >> x >> expected_output; // Read x and expected output

        int fact = factorial(x); // Call factorial function

        // Output result comparison
        if (fact == expected_output) {
            cout << "Test Passed!" << endl;
        } else {
            cout << "Test Failed." << endl;
            cout << "Input: " << x << ", Expected: " << expected_output << ", Result: " << fact  << endl;
        }
    }

    infile.close(); // Close the file

    cout << "-------------------------" << endl; // Footer
    return 0;
}

