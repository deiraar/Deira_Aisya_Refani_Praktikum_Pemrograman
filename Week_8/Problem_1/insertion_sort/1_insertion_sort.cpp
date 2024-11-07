#include <iostream>
#include <string>
using namespace std;

struct student {
    string name;
    long long nisn;
    int value;
};

// Insertion sort based on NISN
void insertionsort_nisn(student arr[], int n) {
    int j;
    student temp;  // Temporary variable to hold the current element

    // Loop through each element starting from the second one (index 1)
    for (int i = 1; i < n; i++) 
    {
        // Assign the current element to temp (this is the element to be inserted)
        temp = arr[i]; 
        // j is initialized to the index before the current one (i - 1)
        j = i - 1;

        // Shift elements in the sorted part of the array to the right
        // As long as the current element's NISN is smaller than arr[j]'s NISN
        // This ensures that larger NISNs get pushed right
        while (j >= 0 && arr[j].nisn > temp.nisn) {
            arr[j + 1] = arr[j];  // Move arr[j] to the next position
            j--;  // Decrease j to continue checking the previous elements
        }
        // Place the current element (temp) in its correct sorted position
        arr[j + 1] = temp;
    }
}


// Insertion sort based on value
void insertionsort_value(student arr[], int n) {
    int j;
    student temp; // Temporary variable to hold the current element

    for (int i = 1; i < n; i++) 
    {
        // Assign the current element to temp (this is the element to be inserted)
        temp = arr[i]; // Mengambil elemen yang akan diinsert
        // j is initialized to the index before the current one (i - 1)
        j = i - 1;

        // Shift elements in the sorted part of the array to the right
        // As long as the current element's NISN is smaller than arr[j]'s value
        // This ensures that larger NISNs get pushed right
        while (j >= 0 && arr[j].value > temp.value) {
            arr[j + 1] = arr[j]; // Move arr[j] to the next position
            j--;  // Decrease j to nisncontinue checking the previous elements
        }
        // Place the current element (temp) in its correct sorted position
        arr[j + 1] = temp;
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

    // Print Students data after insterion sorting based on NISN
    cout << "\nData after insertion sorting based on NISN: " << endl;
    insertionsort_nisn(students, n);
    displaystudents(students, n);

    // Print Students data after insterion sorting based on value
    cout << "\nData after insertion sorting based on value: " << endl;
    insertionsort_value(students, n);
    displaystudents(students, n);

    return 0;
}
