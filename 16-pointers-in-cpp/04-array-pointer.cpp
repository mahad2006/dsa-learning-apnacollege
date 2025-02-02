#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Declare an array
    int* ptr = arr; // Pointer to the first element of the array
    
    // Accessing array elements using pointer
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " is: " << *(ptr + i) << endl; // Dereferencing the pointer
    }
    
    return 0;
}
