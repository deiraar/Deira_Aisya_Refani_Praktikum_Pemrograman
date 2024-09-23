#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseVector(const vector<int>& input) {
    vector<int> reversed;
    for (int i = input.size() - 1; i >= 0; i--) {
        reversed.push_back(input[i]);
    }
    return reversed;
}

int main() {
    // Header
    cout << "-----------------------------" << endl;
    cout << "  Reverese An Array Program" << endl;
    cout << "-----------------------------" << endl;

    vector<int> vec;
    int n, value;

    // Input number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Input elements into the vector
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        vec.push_back(value);
    }

    // Reverse the vector
    vector<int> reversedVec = reverseVector(vec);

    // Print the reversed vector
    cout << "Reversed vector: ";
    for (int num : reversedVec) {
        cout << num << " ";
    }
    cout << endl;

    // Footer
    cout << "-----------------------------" << endl;


    return 0;
}