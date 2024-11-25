#include<iostream>
#define pi 3.14

using namespace std;

int main()
{
    cout << "Find The Area of A Circle" << endl; // Header
    int r; cout << "Input the radius of a circle: "; cin >> r; // Declare an integer called r

    float area = pi*r*r; // Calculate area

    cout << "The area of the circle is: " << area << endl; // Print out area
}
