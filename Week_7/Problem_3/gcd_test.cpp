#include<iostream>
#include<fstream>
#include<sstream> 
using namespace std;

// gcd function
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    ifstream testFile("test.txt"); // Open txt file
    string line;

    if (!testFile) {
        cout << "Error: file test.txt tidak dapat dibuka." << endl;
        return 1;
    }

    int a, b, expected_output;
    while (getline(testFile, line)) {
        stringstream ss(line);
        ss >> a >> b >> expected_output;

        // Calculate gcd
        int result = gcd(a, b);

        // Check whether the program answers are the same as expectd_output
        cout << "Testing GCD(" << a << ", " << b << "): ";
        if (result == expected_output) {
            cout << "Test Passed!" << endl;
        } else {
            cout << "Test Failed." << endl;
            cout << "Got: " << result << ", Expected: " << expected_output << endl;
        }
    }

    testFile.close();
    return 0;
}
