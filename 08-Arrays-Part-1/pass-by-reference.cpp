#include <iostream>
using namespace std;

// Function that modifies the array using pass by reference
void updateArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;  // Multiply 2 to each element of the array
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Before update: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  // Print the initial array values
    }
    cout << endl;

    // Pass the array by reference
    updateArray(arr, size);

    cout << "After update: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  // Print the modified array values
    }
    cout << endl;

    return 0;
}
