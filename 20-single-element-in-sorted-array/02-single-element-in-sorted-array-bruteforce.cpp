#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach to find the unique element in a sorted array
// where every element appears twice except one.
// Time Complexity: O(n^2)
// Space Complexity: O(1)

int singleElementBruteForce(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int count = 0;

        // Count occurrences of arr[i]

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        // If the element appears only once, return it.

        if (count == 1)
            return arr[i];
    }
    return -1; // If no unique element is found
}

int main() {

    // Example input: every element appears twice except one.
    
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 5, 5};
    int unique = singleElementBruteForce(arr);
    
    if (unique != -1)
        cout << "Unique element (brute force) is: " << unique << endl;
    else
        cout << "Unique element not found" << endl;
        
    return 0;
}
