#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

// Meeting 3 Homework
// Problem 3

int main()
{
    ofstream testFile("test.txt"); // Open file (default mode is overwrite)

    if (!testFile) 
    {
        cout << "Error: Could not open test.txt" << endl;
        return 1;
    }

    // Header on testfile
    testFile << "--------------------------" << endl;
    testFile << "Quadratic Equation Program" << endl;
    testFile << "--------------------------" << endl;

    // Header on output
    cout << "--------------------------" << endl;
    cout << "Quadratic Equation Program" << endl;
    cout << "--------------------------" << endl;

    int a, b, c, discriminant; // declare some integer variables a, b, c, discriminant

    cout << "Please input a, b, c below here" << endl;
    testFile << "Please input a, b, c below here" << endl;
    cout << "a = ";
    cin >> a; // input a 
    testFile << "a = " << a << endl; // save to file

    cout << "b = ";
    cin >> b; // input b 
    testFile << "b = " << b << endl; // save to file

    cout << "c = ";
    cin >> c; // input c
    testFile << "c = " << c << endl; // save to file

    discriminant = (pow(b, 2)) - (4 * a * c); // calculate discriminant

    if (discriminant > 0)
    {
        float x1, x2; // declare float variables x1, x2
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "There are two distinct real roots" << endl;
        testFile << "There are two distinct real roots" << endl; // print on testfile
        cout << "They are x1 = " << x1 << " and x2 = " << x2 << endl;
        testFile << "They are x1 = " << x1 << " and x2 = " << x2 << endl; // print on testfile
    }
    else if (discriminant == 0)
    {
        float x; // declare float variable x
        x = -b / (2 * a);
        cout << "There is exactly one real root" << endl;
        testFile << "There is exactly one real root" << endl;
        cout << "It is x = " << x << endl;
        testFile << "It is x = " << x << endl;
    }
    else
    {
        cout << "There are no real roots" << endl;
        testFile << "There are no real roots" << endl;
    }

    cout << "--------------------------" << endl;
    testFile << "--------------------------" << endl; // Footer in file

    return 0; // testFile will be closed automatically here
}
