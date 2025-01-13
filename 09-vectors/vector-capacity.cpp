#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec; // Create an empty vector

    // Display initial capacity
    cout << "Initial capacity: " << vec.capacity() << endl;

    // Add elements and observe capacity doubling
    for (int i = 1; i <= 10; ++i) {
        vec.push_back(i);
        cout << "After adding element " << i << ": Size = " << vec.size()
             << ", Capacity = " << vec.capacity() << endl;
    }

    return 0;
}
