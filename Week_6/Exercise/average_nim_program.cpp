#include<iostream> // import library
using namespace std;

struct student_data // declare struct called student_data
{
    int nim; // declare an integer called nim in student_data striuct
    float uts; // declare a float called uts in student_data striuct
    float uas; // declare a float called uas in student_data striuct
    float gpa; // declare a float called gpa in student_data striuct
};


int main()
{
    // header
    cout << "--------------------------" << endl;
    cout << "Average Exam Score Program" << endl;
    cout << "--------------------------" << endl;

    int n; // declare an integer called n
    cout << "Enter the number of students: "; cin >> n; // input the number of students in n

    student_data student_array[n]; // make an array called student_array as many as n to save all the data in the student_data struct

    for(int i=0; i<n; i++) // loop for inputs
    {
        cout << "Enter the NIM: "; cin >> student_array[i].nim;
        cout << "Enter UTS value: "; cin >> student_array[i].uts;
        cout << "Enter UAS value: "; cin >> student_array[i].uas;
        cout << endl;

        student_array[i].gpa = float((student_array[i].uts + student_array[i].uas)/2.0); // calculate the average gpa
    }

    cout << "--------------------------" << endl;

    for(int i=0; i<n; i++) // loop for outputs
    {
        cout << "Student " << i+1 << endl;
        cout << "NIM: " << student_array[i].nim << endl;
        cout << "Average: " << student_array[i].gpa << endl;
        cout << endl;
    }
    cout << "--------------------------" << endl;
    
}