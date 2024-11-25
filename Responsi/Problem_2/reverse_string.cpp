#include<iostream>

using namespace std;

int main()
{
    cout << "Reverse A String" << endl; // Header
    string s; cout << "Input the string: "; getline(cin,s); // Declare s as string and let the user to input the string (s)
    
    cout << "The reverse result: "; 
    for(int i=s.size(); i>=0; i--) // Print out output
    {
        cout << s[i];
    }
    cout << endl;
}
