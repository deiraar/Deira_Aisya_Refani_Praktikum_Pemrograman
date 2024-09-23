#include <iostream>
#include <fstream> // add txt file

using namespace std;

int main()
{
    ofstream testFile("test.txt"); // make a txt file to save output

    if (!testFile) 
    {
        cout << "Error: Could not open test.txt" << endl;
        return 1;
    }

    // header on testfile
    testFile << "-----------------------------" << endl;
    testFile << "Sum of Natural Number Program" << endl;
    testFile << "-----------------------------" << endl;

    // header on output
    cout << "-----------------------------" << endl;
    cout << "Sum of Natural Number Program" << endl;
    cout << "-----------------------------" << endl;
    
    int n; // declare an integer called n

    cout << "Input: "; // input an integer to n
    testFile << "Input: ";
    cin >> n;

    cout << "Output: " ;
    testFile << "Output: " << endl;

    int sum = 0; // declare an integer called sum that has value = 0

    for (int i = 1; i <= n; i++)
    {
        sum += i; // sum all for 1 to n
    }

    cout << "Sum = " << sum << endl;
    testFile << "Sum = " << sum << endl; // print output

    // footer
    cout << "-----------------------------" << endl;
    testFile << "-----------------------------" << endl;

    return 0; // The file will be automatically closed here.
}
