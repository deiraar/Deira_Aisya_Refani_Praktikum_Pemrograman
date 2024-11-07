#include <iostream>
#include <string>
using namespace std;

struct student {
    string name;
    long long nisn;
    int value;
};

// Selection sort based on NISN
void selectionsort_nisn(student arr[], int n) {
    int min;  
    student temp;  // Temporary variable to store a student for swapping

    // Loop through the array elements
    for(int i = 0; i < n - 1; i++)
    {
        min = i;  // Assume the current index is the minimum

        // Inner loop to find the minimum NISN in the unsorted portion
        for(int j = i + 1; j < n; j++)
        {
            // If we find an element with a smaller NISN, update the min index
            if(arr[j].nisn < arr[min].nisn)
            {
                min = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted portion
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}


// Selection sort based on value
void selectionsort_value(student arr[], int n) {
    int min;  
    student temp;  // Temporary variable to store a student for swapping

    // Loop through the array elements
    for(int i = 0; i < n - 1; i++)
    {
        min = i;  // Assume the current index is the minimum

        // Inner loop to find the minimum value in the unsorted portion
        for(int j = i + 1; j < n; j++)
        {
            // If we find an element with a smaller value, update the min index
            if(arr[j].value < arr[min].value)
            {
                min = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted portion
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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

    // Print Students data after selection sorting based on NISN
    cout << "\nData after selection sorting based on NISN: " << endl;
    selectionsort_nisn(students, n);
    displaystudents(students, n);

    // Print Students data after selection sorting based on value
    cout << "\nData after selection sorting based on value: " << endl;
    selectionsort_value(students, n);
    displaystudents(students, n);

    return 0;
}
