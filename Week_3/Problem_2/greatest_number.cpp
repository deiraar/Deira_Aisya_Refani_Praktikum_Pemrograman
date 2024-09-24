#include <iostream>
#include <cmath>

using namespace std;

// Meeting 3 Homework
// Find The Greatest Number Program

int main()
{
    // Header
    cout << "--------------------------------" << endl;
    cout << "Find The Greatest Number Program" << endl;
    cout << "--------------------------------" << endl;

    int number_1, number_2, number_3; // Declare integer variables
    cout << "Input number 1: "; cin >> number_1; // Input number 1
    cout << "Input number 2: "; cin >> number_2; // Input number 2
    cout << "Input number 3: "; cin >> number_3; // Input number 3

    int greatest; // Declare an integer to save the greatest value
    if(number_1 > number_2) // If number_1 > number_2
    {
        if(number_1 > number_3) // If number_1 > number_3
        {
            greatest = number_1; // number_1 is the greatest
        }
        else // if number_1 < number_3
        {
            greatest = number_3; // number_3 is the greatest
        }
    }
    else // If number_2 > number_1
    {
        if(number_2 > number_3) // If number_2 > number_3
        {
            greatest = number_2; // number_2 is the greatest
        }
        else // if number_3 < number_2
        {
            greatest = number_3; // number_3 is the greatest
        }
    }

    // print output
    cout << endl;
    cout << "The greatest number is: " << greatest << endl;

    // Footer
    cout << "--------------------------------" << endl;
}