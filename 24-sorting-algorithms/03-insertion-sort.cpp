#include <iostream>
#include <vector>
using namespace std;

// Function to print the elements of an array.
// Time Complexity: O(n)
// Space Complexity: O(1)

void printArray(const vector<int> &arr)
{
    for (int x : arr)
        cout << x << " ";
    cout << endl;
}

// Function to perform insertion sort on an array.
// Time Complexity: O(n^2) in the worst-case, O(n) in the best-case.
// Space Complexity: O(1)

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        // Shift elements of arr[0..i-1] that are greater than key one position ahead.
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    vector<int> arr = {4, 1, 5, 2, 3};

    cout << "Original array:" << endl;
    printArray(arr);

    insertionSort(arr);

    cout << "\nSorted array:" << endl;
    printArray(arr);

    return 0;
}
