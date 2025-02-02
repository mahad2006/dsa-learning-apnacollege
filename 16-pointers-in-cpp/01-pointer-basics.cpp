#include <iostream>
using namespace std;

int main() {
    // Memory Allocation: Dynamic memory allocation using new
    int* ptr = new int;   // Allocating memory for a single integer
    *ptr = 10;            // Assign value to the allocated memory
    cout << "Dynamically allocated memory value: " << *ptr << endl;

    // Address Operator: Using & to get the address of a variable
    int num = 20;
    cout << "Address of num: " << &num << endl;

    // Pointers: Using pointer to store address
    int* ptr1 = &num;
    cout << "Pointer to num: " << ptr1 << endl; // Will print the address of num

    // Pointer to Pointer: Storing pointer's address in another pointer
    int** ptr2 = &ptr1;
    cout << "Pointer to pointer value: " << *ptr2 << endl; // Prints the address of num

    // Null Pointer: Pointer that doesn't point to any memory location
    int* ptr3 = nullptr;
    if(ptr3 == nullptr) {
        cout << "Pointer is NULL" << endl;
    }

    // Dereferencing Pointer: Accessing the value using the pointer
    cout << "Value of num using pointer dereferencing: " << *ptr1 << endl;

    // Clean up dynamically allocated memory
    delete ptr;  // Deallocate memory
    return 0;
}
