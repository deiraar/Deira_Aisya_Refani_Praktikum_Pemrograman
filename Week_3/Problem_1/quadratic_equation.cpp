#include<iostream>
#include<cmath>
using namespace std;

// Meeting 3 Homework
// Quadratic Equation Program

int main()
{
    // Header
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
        int x; // declare an integer variable x
        x = -b / (2*a);
        cout << "There is exactly one real root" << endl;
        cout << "It is x = " << x << endl;
    }

    else
    {
        cout << "There are no real roots" << endl;
    }

    // footer
    cout << "--------------------------" << endl;

    return 0;
}
