#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector and add some elements
    vector<int> vec = {10, 20, 30, 40, 50};

    // 1. Access elements using at() and indexing
    cout << "Element at index 2 using at(): " << vec.at(2) << endl;
    cout << "Element at index 3 using indexing: " << vec[3] << endl;

    // 2. Add elements using push_back()
    vec.push_back(60);
    cout << "After push_back(60): ";
    for (int value : vec) cout << value << " ";
    cout << endl;

    // 3. Remove the last element using pop_back()
    vec.pop_back();
    cout << "After pop_back(): ";
    for (int value : vec) cout << value << " ";
    cout << endl;

    // 4. Get the size of the vector
    cout << "Size of the vector: " << vec.size() << endl;

    // 5. Check if the vector is empty
    cout << "Is the vector empty? " << (vec.empty() ? "Yes" : "No") << endl;

    // 6. Clear all elements in the vector
    vec.clear();
    cout << "After clear(), is the vector empty? " << (vec.empty() ? "Yes" : "No") << endl;

    return 0;
}
