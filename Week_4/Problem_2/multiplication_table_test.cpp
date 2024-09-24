#include <iostream>
#include <fstream>
#include <vector>

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
    cout << "Multiplication Table Program" << endl;
    cout << "----------------------------" << endl;

    int n; // Declare an integer called n
    while (testFile >> n) { // Read n from the file
        vector<int> expected(11); // Vector to hold expected results
        expected[0] = n; // Store n as the first element
        
        for (int i = 1; i <= 10; ++i) {
            testFile >> expected[i]; // Read expected results from the file
        }

        // Print out the multiplication table and check against expected results
        bool passed = true;
        for (int i = 1; i <= 10; i++) { // Loop from 1 to 10
            int result = n * i; // Calculate the result
            cout << n << " x " << i << " = " << result << endl;

            // Check if the result matches the expected value
            if (result != expected[i]) {
                passed = false;
                cout << "Failed at " << n << " x " << i << ": Expected " << expected[i] << ", Got " << result << endl;
            }
        }

        if (passed) {
            cout << "All tests passed for input " << n << "." << endl;
        }
        
        cout << "----------------------------" << endl; // Separator for each case
    }

    // Footer
    cout << "----------------------------" << endl;

    // Close the file
    testFile.close();
    return 0; // Exit the program successfully
}
