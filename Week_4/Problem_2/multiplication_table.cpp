#include <iostream>
#include <fstream> // add txt file

using namespace std;

int main()
{
    ofstream textFile("text.txt"); // make a txt file to save output

    if (!textFile) 
    {
        cout << "Error: Could not open text.txt" << endl;
        return 1;
    }

    // header
    textFile << "----------------------------" << endl;
    textFile << "Multiplication Table Program" << endl;
    textFile << "----------------------------" << endl;

    int n; // declare an integer called n
    cout << "Input: "; 
    cin >> n; // input an integer to n

    for (int i = 1; i <= 10; i++) // looping from 1 to 10
    {
        // print out result to the file
        textFile << n << " x " << i << " = " << n * i << endl;
    }

    // footer
    textFile << "----------------------------" << endl;

    return 0; // File will be automatically closed when going out of scope
}
