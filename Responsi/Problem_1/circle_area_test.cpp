#include<iostream>
#define pi 3.14

using namespace std;

int main()
{
    cout << "Find The Area of A Circle Testing" << endl; // Header
    int radius[]={7, 20, 100}; // Input radius
    float expected_output[]={153.86, 1256, 31400}; // Expected Output
    float area[3]; // Declare an array to save the area result

    for(int i=0; i<3;i++)
    {
        area[i]=pi*radius[i]*radius[i]; // Calculate ARea

        if(int(area[i])==int(expected_output[i])) // If the output is the same like the expected output
        {
            cout << "Test " << i+1 << " Passed" << endl;
        }
        else // If the output is not the same like the expected output
        {
            cout << "Test " << i+1 << " Failed" << endl; 
            cout << "Expeceted: " << expected_output[i] << "Got: " << area[i] << endl;
        }
    }
}
