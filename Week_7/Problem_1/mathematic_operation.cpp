#include<iostream>
using namespace std;

void addition(int a, int b);    // Addition function
void substraction(int a, int b); // Substraction Function

int main()
{
    // Header
    cout << "-------------------------" << endl;
    cout << "Addition and Substraction" << endl;
    cout << "-------------------------" << endl;

    int a, b; // Declare int a and b
    cout << "Input a: "; cin >> a; // Input a
    cout << "Input b: "; cin >> b; // Input b

    addition(a, b);       // Call addition function
    substraction(a, b);   // Call substraction function
}

void addition(int a, int b)
{
    cout << "a + b = " << (a + b) << endl; // Print out addition result
}

void substraction(int a, int b)
{
    cout << "a - b = " << (a - b) << endl; // Print out substraction result
    cout << "-------------------------" << endl; // Footer
}
