#include<iostream>
#include<cmath>
using namespace std;

// Meeting 2 Homework
// Problem 2

int main()
{
    // header
    cout << "--------------------------" << endl;
    cout << "Quadratic Equation Program" << endl;
    cout << "--------------------------" << endl;

    int a, b, c, discriminant; // declare some integer variables a, b, c, discriminant

    cout << "Please input a, b, c below here" << endl;
    cout << "a = ";
    cin >> a; // input a

    cout << "b = ";
    cin >> b; // input b

    cout << "c = ";
    cin >> c; // input c

    discriminant = (pow(b,2)) - (4*a*c); // calculate discriminant

    if (discriminant > 0)
    {
        float x1, x2; // declare some float variables x1, x2
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "There are two distinct real roots" << endl;
        cout << "They are x1 = " << x1 << " and x2 = " << x2 << endl;
    }

    else if (discriminant == 0)
    {
        float x; // declare an float variable x
        x = -b / (2*a);
        cout << "There is exactly one real root" << endl;
        cout << "It is x = " << x << endl;
    }

    else
    {
        cout << "There are no real roots" << endl;
    }

    cout << "--------------------------" << endl;

    return 0;
}

// TEST CASES
// CASE 1 (discriminant > 0)
// a = 4
// b = -5
// c = -12

// CASE 2 (discriminant == 0)
// a = 1
// b = 2
// c = 1

// CASE 3 (discriminant < 0)
// a = 1
// b = -2
// c = 5
