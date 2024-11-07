#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

struct student {
    string name;
    long long nisn;
    int value;
};

void bubblesort_nisn(student arr[], int n) {
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(arr[j].nisn > arr[j + 1].nisn)
                swap(arr[j], arr[j + 1]);
}

void bubblesort_value(student arr[], int n) {
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(arr[j].value > arr[j + 1].value)
                swap(arr[j], arr[j + 1]);
}

bool loadExpectedOutput(const string& filename, vector<string>& expectedNisnOrder, vector<string>& expectedValueOrder) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        return false;
    }

    string line;
    bool readingNisn = false, readingValue = false;
    while (getline(file, line)) {
        if (line.empty() || line[0] == '#') {
            readingNisn = line.find("NISN") != string::npos;
            readingValue = line.find("value") != string::npos;
            continue;
        }
        if (readingNisn) expectedNisnOrder.push_back(line);
        else if (readingValue) expectedValueOrder.push_back(line);
    }
    
    file.close();

    if (expectedNisnOrder.empty() || expectedValueOrder.empty()) {
        cerr << "Error: Expected output data is missing in file " << filename << endl;
        return false;
    }
    return true;
}

bool compareOutput(const vector<string>& expected, student arr[], int n) {
    for (int i = 0; i < n; i++) {
        stringstream output;
        output << arr[i].nisn << " | " << arr[i].name << " | " << arr[i].value;
        if (output.str() != expected[i]) {
            cerr << "Mismatch at index " << i << ": expected \"" << expected[i]
                 << "\", got \"" << output.str() << "\"" << endl;
            return false;
        }
    }
    return true;
}

int main() {
    student students[] = {
        {"Handi Ramadhan", 9960312699, 90},
        {"Rio Alfandra", 9963959682, 55},
        {"Ronaldo Valentino Uneputty", 9950310962, 80},
        {"Achmad Yaumil Fadjri R.", 9970272750, 60},
        {"Alivia Rahma Pramesti", 9970293945, 70},
        {"Ari Lutfianto", 9952382180, 65},
        {"Arief Budiman", 9965653989, 60}
    };
    int n = sizeof(students) / sizeof(students[0]);

    vector<string> expectedNisnOrder, expectedValueOrder;
    if (!loadExpectedOutput("test.txt", expectedNisnOrder, expectedValueOrder)) {
        return 1;
    }

    bubblesort_nisn(students, n);
    if (compareOutput(expectedNisnOrder, students, n)) {
        cout << "NISN sorting test passed" << endl;
    } else {
        cout << "Test failed at NISN sorting" << endl;
    }

    student originalData[] = {
        {"Handi Ramadhan", 9960312699, 90},
        {"Rio Alfandra", 9963959682, 55},
        {"Ronaldo Valentino Uneputty", 9950310962, 80},
        {"Achmad Yaumil Fadjri R.", 9970272750, 60},
        {"Alivia Rahma Pramesti", 9970293945, 70},
        {"Ari Lutfianto", 9952382180, 65},
        {"Arief Budiman", 9965653989, 60}
    };
    for (int i = 0; i < n; i++) students[i] = originalData[i];

    bubblesort_value(students, n);
    if (compareOutput(expectedValueOrder, students, n)) {
        cout << "Value sorting test passed" << endl;
    } else {
        cout << "Test failed at value sorting" << endl;
    }

    return 0;
}
