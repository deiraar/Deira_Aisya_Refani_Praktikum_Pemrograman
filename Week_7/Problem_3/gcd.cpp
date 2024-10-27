#include<iostream>
using namespace std;

int gcd(int a, int b); // Declare function

int main()
{
    // Header
    cout << "------------------------------------" << endl;
    cout << "Finding The Greatest Common Divisior" << endl;
    cout << "------------------------------------" << endl;

    int a,b;
    cout << "Input a: "; cin >> a; // Input a
    cout << "Input b: "; cin >> b; // Input b

    cout << "GCD Result = " << gcd(a,b) << endl; // Print output and call gcd function

    cout << "------------------------------------" << endl; // Footer
}

int gcd(int a, int b) // GCD function recursive
{
    if(b == 0)
    {
        return a; // If b=0, it will print out a
    }
    else
    {
        return gcd(b, a % b); // Else, it will do reccursion in the perogram until the right side of the function is 0
    }
}