#include <iostream>
#include <string>
using namespace std;

struct student {
    string name;
    long long nisn;
    int value;
};

// Function to perform bubble sort based on NISN
void bubble_sort(student arr[], int n) 
{
    student temp; // Temporary variable for swapping
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1; j++) // Compare adjacent elements
        {
            if(arr[j].nisn > arr[j + 1].nisn) // If current NISN is greater than the next
            {
                // Swap students
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform sequential search
void sequencial_search(int query, int n, student arr[])
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i].value == query) // Check if the value matches the query
        {
            arr[i].name = "Joko                      "; // Change the name to "Joko" if found
        }
    }
}

// Function to display the students' data
void displaystudents(student arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i].nisn << " | " << arr[i].name << " | " << arr[i].value << endl;
    }
}

int main() 
{
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

    // Sort the students by NISN
    bubble_sort(students, n); // Call the bubble sort function to sort students

    int find_value = 60; // Value to find and change name to "Joko"

    // Print result before changing names
    cout << "Before changing name to Joko for people with value 60: " << endl;
    displaystudents(students, n);

    cout << endl;

    // Call sequential search to change names
    sequencial_search(find_value, n, students); 

    // Print result after changing names
    cout << "After changing name to Joko for people with value 60: " << endl;
    displaystudents(students, n);

    return 0;
}
