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

// Function to perform binary search
int binary_search(long long query, int n, student arr[])
{
    int k, i = 0, j = n - 1; // Initialize j to n - 1 for zero-indexing
    bool found = false;
    while (!found && i <= j)
    {
        k = (i + j) / 2; // Calculate the middle index
        if (arr[k].nisn < query)
        {
            i = k + 1; // Search in the right half
        }
        else if (arr[k].nisn == query)
        {
            found = true; // Item found
        }
        else
        {
            j = k - 1; // Search in the left half
        }
    }

    // Return value or -1 if not found
    if (!found)
    {
        cout << "Data is not found." << endl; // Fixed the message
        return -1; // Indicate not found
    }
    else
    {
        return arr[k].value; // Return the found value
    }
}

// Function to display the students data
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

    long long find_nisn = 9950310962; // NISN to find

    // Print result
    cout << "Result: " << endl;
    cout << "NISN: " << find_nisn << endl;
    int result = binary_search(find_nisn, n, students); // Call binary search
    if (result != -1) // Check if a valid value was returned
    {
        cout << "Value: " << result << endl; // Print found value
    }

    return 0;
}
