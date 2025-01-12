#include <iostream>
using namespace std;

// This file demonstrates the basic syntax of arrays in C++

int main() {
    // 1. Declaration of an array
    int numbers[5]; // Declares an array of size 5 that can store integers.

    // 2. Initialization of an array (at the time of declaration)
    int initializedArray[5] = {10, 20, 30, 40, 50};

    // 3. Accessing elements of an array
    cout << "First element: " << initializedArray[0] << endl; // Accessing the first element
    cout << "Third element: " << initializedArray[2] << endl; // Accessing the third element

    // 4. Modifying elements of an array
    numbers[0] = 100; // Assigning a value to the first element
    cout << "Modified first element: " << numbers[0] << endl;

    // 5. Iterating through an array using a for loop
    cout << "Elements in the initialized array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << initializedArray[i] << endl;
    }

    // 6. Partial initialization
    int partialArray[5] = {1, 2}; // Only the first two elements are initialized
    cout << "Partial initialization, third element: " << partialArray[2] << endl; // Uninitialized elements default to 0

    // 7. Multidimensional array declaration and initialization
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Matrix (2D Array):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
