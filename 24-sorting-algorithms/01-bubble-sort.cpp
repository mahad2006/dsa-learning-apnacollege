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

// Function to perform bubble sort on an array.
// After each swap, the current state of the array is printed.
// Time Complexity: O(n^2) in the worst case
// Space Complexity: O(1)

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        // In each pass, the last i elements are already sorted.
        for (int j = 0; j < n - i - 1; j++)
        {
            // If the current element is greater than the next, swap them.
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                // Print the array after each swap.
                printArray(arr);
            }
        }
    }
}

int main()
{
    vector<int> arr = {4, 1, 5, 2, 3};

    cout << "Original array:" << endl;
    printArray(arr);

    cout << "\nSorting process:" << endl;
    bubbleSort(arr);

    cout << "\nSorted array:" << endl;
    printArray(arr);

    return 0;
}
