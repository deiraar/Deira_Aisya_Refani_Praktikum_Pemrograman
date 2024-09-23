#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
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

    // Print the results
    for (const auto& result : results) {
        cout << result << endl;
    }

    // Footer
    cout << "----------------------------" << endl;

    return 0;
}
