#include <iostream>
using namespace std;

// Function to swap two integers using pass by reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10, num2 = 20;

    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Calling function to swap numbers by reference
    swapByReference(num1, num2);

    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
