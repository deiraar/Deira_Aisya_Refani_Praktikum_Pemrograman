#include <iostream>
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
    cout << "-----------------------------" << endl;
    cout << "Sum of Natural Numbers Program" << endl;
    cout << "-----------------------------" << endl;

    int n, expected; // Declare integers n and expected

    cout << "Output: " << endl;

    while (testFile >> n >> expected) { // Read n and expected values from the file
        int sum = 0; // Reset sum for each test case

        // Calculate the sum of natural numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            sum += i; // Sum i from 1 to n
        }

        // Compare calculated sum with expected value
        if (sum == expected) {
            cout << "Test passed." << endl;
        } else {
            cout << "Test Failed." << endl;
            cout << "Expected: " << expected << ", Got: " << sum << endl;
        }
    }

    // Footer
    cout << "-----------------------------" << endl;

    // Close the file
    testFile.close();
    return 0; // Exit the program successfully
}
