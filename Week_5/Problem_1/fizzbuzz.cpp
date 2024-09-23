#include<iostream>
#include<vector>
#include<string>

int main()
{
    // header
    std:: cout << "----------------------------" << endl;
    std:: cout << "   FizzBuzz with Vectors" << endl;
    std:: cout << "----------------------------" << endl;

    std:: vector<std:: string> results;

    for (int i=1; i<=100; i++)
    {
        if(i % 3 == 0)
        {
            results = "Fizz";
        }
        else if(i % 5 == 0)
        {
            
        }
        else if(i % 5 == 0 && i % 3 == 0) 
        {
            
        }
    }

    std:: cout << results << endl;

    // footer
    cout << "----------------------------" << endl;
    
    return 0;
}