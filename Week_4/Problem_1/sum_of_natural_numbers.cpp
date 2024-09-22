#include<iostream>

using namespace std;

int main()
{
    // header
    cout << "-----------------------------" << endl;
    cout << "Sum of Natural Number Program" << endl;
    cout << "-----------------------------" << endl;
    int n;

    cout << "Input: "; cin >> n;

    cout << "Output: " << endl;

    int sum = 0;

    for(int i=0; i<=n; i++)
    {
        sum += i;
    }

    cout << "Sum = " << sum << endl;

    // footer
    cout << "-----------------------------" << endl;
}