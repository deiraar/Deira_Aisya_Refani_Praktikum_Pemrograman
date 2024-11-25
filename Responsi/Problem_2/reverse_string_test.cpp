#include<iostream>

using namespace std;

int main()
{
    cout << "Reverse String (Test Case)" << endl; // Header

    string input[] = {"hello", "deira", "praktikum pemrograman"}; // Input string
    string expected_output[] = {"olleh", "aried", "namargormep mukitkarp"}; // Expected output
    string output[3]; // Declare an array called output to save the reverse result

    for(int i = 0; i < 3; i++)
    {
        output[i] = "";
    
        for(int j = input[i].size() - 1; j >= 0; j--) // Reverse String
        {
            output[i] += input[i][j];
        }

        if(output[i] == expected_output[i]) // If the string is match between output and expected_output
        {
            cout << "Test " << i+1 << " Passed" << endl;
        }
        else // If the string is not match between output and expected_output
        {
            cout << "Test " << i+1 << " Failed" << endl;
            cout << "Got: " << output[i] << ", Expected: " << expected_output[i] << endl;
        }
    }
    return 0;
}

