#include<iostream>

using namespace std;

int main()
{
    // header
    cout << "----------------------------" << endl;
    cout << "Multiplication Table Program" << endl;
    cout << "----------------------------" << endl;

    int n; // declare an integer called n
    cout << "Input: "; cin >> n; // input an integer to n

    for (int i=1; i<=10; i++) // looping from 1 to 10
    {
        // print out result
        cout << n << " x " << i << " = " << n*i << endl;
    }

    // footer
    cout << "----------------------------" << endl;
}