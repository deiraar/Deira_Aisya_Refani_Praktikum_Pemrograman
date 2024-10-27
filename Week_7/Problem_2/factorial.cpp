#include <iostream>
using namespace std;

int factorial(int x); // Declare function

int main()
{
    // Header
    cout << "-------------------------" << endl;
    cout << "    Factorial Program" << endl;
    cout << "-------------------------" << endl;

    int x; // Declare x

    cout << "Input x: "; cin >> x; // Input x

    int fact = factorial(x); // Call factorial function

    if (fact == -1) {
        cout << "Factorial doesn't defined if it's negative." << endl;
    } else {
        cout << "Factorial result: " << fact << endl; // Print out result
    }
    
    cout << "-------------------------" << endl; // Footer

    return 0;
}

int factorial(int x)
{
    if (x < 0) {
        return -1; // Return -1 for negative input
    } else if (x == 0 || x == 1) {
        return 1; // If 0! and 1! because the results are 0
    } else {
        int result = 1;
        for (int i = 2; i <= x; i++) {
            result *= i; // Calculate factorial
        }
        return result;
    }
}

