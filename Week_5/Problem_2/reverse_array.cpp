#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    // Header
    cout << "-----------------------------" << endl;
    cout << "  Reverse An Array Program" << endl;
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

    // Reverse the vector by swapping from the farthest
    // Example
    // 1 2 3 4 5
    // 5 2 3 4 1
    // 5 4 3 2 1
    for (int i = 0; i < n / 2; ++i) {
        swap(vec[i], vec[n - 1 - i]);
    }

    // Print the reversed vector using a for loop with index
    cout << "Reversed vector: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Footer
    cout << "-----------------------------" << endl;

    return 0;
}
