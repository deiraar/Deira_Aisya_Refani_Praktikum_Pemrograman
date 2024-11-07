#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
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
    student temp;
    for (int i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j].nisn > temp.nisn) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

// Insertion sort based on value
void insertionsort_value(student arr[], int n) {
    int j;
    student temp;
    for (int i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j].value > temp.value) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

// Helper function to trim trailing spaces
string trim(const string& str) {
    size_t end = str.find_last_not_of(" ");
    return (end == string::npos) ? "" : str.substr(0, end + 1);
}

// Function to compare sorted data with expected data from file
bool compareOutput(const vector<string>& expected, student arr[], int n) {
    for (int i = 0; i < n; i++) {
        stringstream output;
        output << arr[i].nisn << " | " << trim(arr[i].name) << " | " << arr[i].value;
        string trimmedExpected = trim(expected[i]);
        string trimmedOutput = trim(output.str());
        if (trimmedOutput != trimmedExpected) {
            return false;
        }
    }
    return true;
}

// Function to read expected output from test file
bool readExpectedOutput(const string& filename, vector<string>& nisnExpected, vector<string>& valueExpected) {
    ifstream file(filename);
    if (!file) {
        cerr << "Failed to open file: " << filename << endl;
        return false;
    }

    string line;
    vector<string>* currentExpected = nullptr;
    while (getline(file, line)) {
        if (line.find("NISN") != string::npos) {
            currentExpected = &nisnExpected;
        } else if (line.find("value") != string::npos) {
            currentExpected = &valueExpected;
        } else if (currentExpected) {
            currentExpected->push_back(line);
        }
    }
    return true;
}

int main() {
    // Students Data
    string name_data[] = {"Handi Ramadhan            ", "Rio Alfandra              ", "Ronaldo Valentino Uneputty",
                          "Achmad Yaumil Fadjri R.   ", "Alivia Rahma Pramesti     ", 
                          "Ari Lutfianto             ", "Arief Budiman             "};
    long long nisn_data[] = {9960312699, 9963959682, 9950310962, 9970272750, 9970293945, 9952382180, 9965653989};
    int value_data[] = {90, 55, 80, 60, 70, 65, 60};

    int n = 7;
    student students[n];
    for (int i = 0; i < n; i++) {
        students[i].name = name_data[i];
        students[i].nisn = nisn_data[i];
        students[i].value = value_data[i];
    }

    // Read expected output from test.txt
    vector<string> nisnExpected, valueExpected;
    if (!readExpectedOutput("test.txt", nisnExpected, valueExpected)) {
        cerr << "Error reading expected output" << endl;
        return 1;
    }

    // Sort by NISN and compare with expected output
    insertionsort_nisn(students, n);
    if (compareOutput(nisnExpected, students, n)) {
        cout << "Test passed for NISN sorting" << endl;
    } else {
        cout << "Test failed for NISN sorting" << endl;
    }

    // Restore original order for value sorting
    for (int i = 0; i < n; i++) {
        students[i].name = name_data[i];
        students[i].nisn = nisn_data[i];
        students[i].value = value_data[i];
    }

    // Sort by value and compare with expected output
    insertionsort_value(students, n);
    if (compareOutput(valueExpected, students, n)) {
        cout << "Test passed for value sorting" << endl;
    } else {
        cout << "Test failed for value sorting" << endl;
    }

    return 0;
}
