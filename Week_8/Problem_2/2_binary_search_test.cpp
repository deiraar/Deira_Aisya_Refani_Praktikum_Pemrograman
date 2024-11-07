#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct student {
    string name;
    long long nisn;
    int value;
};

// Bubble sort function based on NISN
void bubble_sort(student arr[], int n) 
{
    student temp;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(arr[j].nisn > arr[j + 1].nisn) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Binary search function
int binary_search(long long query, int n, student arr[])
{
    int k, i = 0, j = n - 1;
    bool found = false;
    while (!found && i <= j)
    {
        k = (i + j) / 2;
        if (arr[k].nisn < query)
        {
            i = k + 1;
        }
        else if (arr[k].nisn == query)
        {
            found = true;
        }
        else
        {
            j = k - 1;
        }
    }

    return found ? arr[k].value : -1;
}

// Test function to compare the search result with the expected output from test.txt
void run_test(student arr[], int n, long long find_nisn) {
    // Sort the array
    bubble_sort(arr, n);

    // Run binary search
    int search_result = binary_search(find_nisn, n, arr);

    // Read expected result from test.txt
    ifstream file("test.txt");
    long long expected_nisn;
    int expected_value;
    if (file >> expected_nisn >> expected_value) {
        // Check if the output matches the expected result
        if (search_result == expected_value) {
            cout << "Test passed" << endl;
        } else {
            cout << "Test failed" << endl;
            cout << "Expected value: " << expected_value << ", but got: " << search_result << endl;
        }
    } else {
        cerr << "Error reading test.txt" << endl;
    }
    file.close();
}

int main() 
{
    // Students Data
    string name_data[] = {"Handi Ramadhan            ", "Rio Alfandra              ", "Ronaldo Valentino Uneputty",
                          "Achmad Yaumil Fadjri R.   ", "Alivia Rahma Pramesti     ", 
                          "Ari Lutfianto             " , "Arief Budiman             "};
    long long nisn_data[] = {9960312699, 9963959682, 9950310962, 9970272750, 9970293945, 9952382180, 9965653989};
    int value_data[] = {90, 55, 80, 60, 70, 65, 60};

    int n = 7;

    student students[n];
    for (int i = 0; i < n; i++) 
    {
        students[i].name = name_data[i];
        students[i].nisn = nisn_data[i];
        students[i].value = value_data[i];
    }

    long long find_nisn = 9950310962; // NISN to search for

    // Run the test
    run_test(students, n, find_nisn);

    return 0;
}
