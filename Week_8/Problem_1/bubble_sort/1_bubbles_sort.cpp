#include <iostream>
#include <string>
using namespace std;

struct student {
    string name;
    long long nisn;
    int value;
};

// Bubbles sort based on nisn
void bubblesort_nisn(student arr[], int n) 
{
    student temp; // Temporary variable to hold student data for swapping

    // Outer loop for each element in the array
    for(int i = 0; i < n - 1; i++)
    {
        // Inner loop for comparing adjacent elements
        for(int j = 0; j < n - 1; j++) // Fixed the loop to go up to n-1
        {
            // If the current student's NISN is greater than the next student's NISN
            if(arr[j].nisn > arr[j + 1].nisn)
            {
                // Swap the students if they are in the wrong order
                temp = arr[j]; // Store the current student in temp
                arr[j] = arr[j + 1]; // Move the next student to the current position
                arr[j + 1] = temp; // Move the stored student to the next position
            }
        }
    }
}

// Bubbles sort based on value
void bubblesort_value(student arr[], int n) 
{
    student temp; // Temporary variable to hold student data for swapping

    // Outer loop for each element in the array
    for(int i = 0; i < n - 1; i++)
    {
        // Inner loop for comparing adjacent elements
        for(int j = 0; j < n - 1; j++) // Fixed the loop to go up to n-1
        {
            // If the current student's NISN is greater than the next student's NISN (this seems incorrect for value sort)
            if(arr[j].value > arr[j + 1].value)
            {
                // Swap the students if they are in the wrong order
                temp = arr[j]; // Store the current student in temp
                arr[j] = arr[j + 1]; // Move the next student to the current position
                arr[j + 1] = temp; // Move the stored student to the next position
            }
        }
    }
}



// Function to display the students data
void displaystudents(student arr[], int n) {
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i].nisn << " | " << arr[i].name << " | " << arr[i].value << endl;
    }
}

int main() {
    // Students Data
    string name_data[] = {"Handi Ramadhan            ", "Rio Alfandra              ", "Ronaldo Valentino Uneputty",
                          "Achmad Yaumil Fadjri R.   ", "Alivia Rahma Pramesti     ", 
                          "Ari Lutfianto             " , "Arief Budiman             "};
    long long nisn_data[] = {9960312699, 9963959682, 9950310962, 9970272750, 9970293945, 9952382180, 9965653989};
    int value_data[] = {90, 55, 80, 60, 70, 65, 60};

    int n = 7; // How many data that filled in the array

    student students[n];
    // Fill array struct student
    for (int i = 0; i < n; i++) 
    {
        students[i].name = name_data[i];   // fill students[i].name with name_data[i]
        students[i].nisn = nisn_data[i];   // fill students[i].nisn with nisn_data[i]
        students[i].value = value_data[i]; // fill students[i].value with value_data[i]
    }

    // Print Students data before insterion sorting
    cout << "Data before sorting: " << endl;
    displaystudents(students, n);

    // Print Students data after bubble sorting based on NISN
    cout << "\nData after bubble sorting based on NISN: " << endl;
    bubblesort_nisn(students, n);
    displaystudents(students, n);

    // Print Students data after bubble sorting based on value
    cout << "\nData after bubble sorting based on value: " << endl;
    bubblesort_value(students, n);
    displaystudents(students, n);

    return 0;
}
