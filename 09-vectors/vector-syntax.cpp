// # Vectors in C++: Syntax

// ## Key Points
// - **Vectors** are dynamic arrays provided by the Standard Template Library (STL).
// - They grow and shrink automatically as elements are added or removed.


#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. Declare an empty vector
    vector<int> vec1;
    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);

    // 2. Declare a vector with a fixed size and default value
    vector<int> vec2(5, 100); // Creates a vector of size 5 with all elements as 100

    // 3. Declare a vector initialized with an array (initializer list)
    vector<int> vec3 = {1, 2, 3, 4, 5};

    // Using range-based for loop to access and print elements
    cout << "Vector 1 elements: ";
    for (int value : vec1) {
        cout << value << " ";
    }
    cout << endl;

    cout << "Vector 2 elements: ";
    for (int value : vec2) {
        cout << value << " ";
    }
    cout << endl;

    cout << "Vector 3 elements: ";
    for (int value : vec3) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
