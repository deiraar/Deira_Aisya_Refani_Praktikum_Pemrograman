#include<iostream>
#include<fstream> // for file handling
#include<iomanip> // for formatting output
using namespace std;

struct student_data {
    int nim; // declare an integer called nim in student_data struct
    float uts; // declare a float called uts in student_data struct
    float uas; // declare a float called uas in student_data struct
    float gpa; // declare a float called gpa in student_data struct
};

int main() {
    ifstream testFile("test.txt");

    if (!testFile) {
        cout << "Error: Could not open the test.txt file!" << endl;
        return 1;
    }

    int n; // number of students

    // Reading the number of students and their input + expected output
    while (testFile >> n) {
        student_data student_array[n]; // make an array of structs for n students
        bool testPassed = true;

        // Loop to read each student's data
        for(int i=0; i<n; i++) {
            int expected_nim;
            float expected_avg;

            testFile >> student_array[i].nim; // read NIM
            testFile >> student_array[i].uts; // read UTS score
            testFile >> student_array[i].uas; // read UAS score
            testFile >> expected_nim;         // read expected NIM
            testFile >> expected_avg;         // read expected average

            student_array[i].gpa = float((student_array[i].uts + student_array[i].uas)/2.0); // calculate GPA

            // Check if calculated values match expected values
            if (student_array[i].nim != expected_nim || student_array[i].gpa != expected_avg) {
                testPassed = false;
                cout << "Test failed for student " << i+1 << endl;
                cout << "Expected NIM: " << expected_nim << ", but got: " << student_array[i].nim << endl;
                cout << "Expected Average: " << expected_avg << ", but got: " << student_array[i].gpa << endl;
            }
        }

        if (testPassed) {
            cout << "Test Passed for " << n << " students." << endl;
        }
    }

    testFile.close();
    return 0;
}
