#include <iostream>
#include <vector>
#include <algorithm>  // For reverse() function
using namespace std;

// Function to reverse a vector
void reverseVector(vector<int>& vec) {
    reverse(vec.begin(), vec.end());  // Reverse the vector in place
}

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    cout << "Original vector: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    reverseVector(vec);

    cout << "Reversed vector: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    return 0;
}
