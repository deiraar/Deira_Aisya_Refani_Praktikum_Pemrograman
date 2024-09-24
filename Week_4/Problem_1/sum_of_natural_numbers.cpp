#include<iostream>

using namespace std;

int main()
{
    // header
    cout << "-----------------------------" << endl;
    cout << "Sum of Natural Numbers Program" << endl;
    cout << "-----------------------------" << endl;

    int n; // decalre an integer called n

    cout << "Input: "; cin >> n; // input the integer

    cout << "Output: " << endl;

    int sum = 0; // declare an integer called sum with value 0

    for(int i=1; i<=n; i++) // looping for 1 until n
    {
        sum += i; // sum i with i from 1 to n
    }

    cout << "Sum = " << sum << endl; // cout sum

    // footer
    cout << "-----------------------------" << endl;
}