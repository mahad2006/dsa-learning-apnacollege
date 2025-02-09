#include <iostream>
#include <vector>
using namespace std;

// Function to print the elements of an array.
// Time Complexity: O(n)
// Space Complexity: O(1)

void printArray(const vector<int> &arr)
{
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

/* Function to perform selection sort on an array.
Selection Sort works by repeatedly finding the minimum element from the unsorted portion
and swapping it with the first element of that portion.
Time Complexity: O(n^2)
Space Complexity: O(1)       */

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    // Loop through each element except the last one
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i; // Assume the first element of the unsorted part is the minimum
        // Find the minimum element in the unsorted subarray
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the element at index i, if needed.
        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
        }
        // Print the array after each pass
        printArray(arr);
    }
}

int main()
{
    vector<int> arr = {4, 1, 5, 2, 3};

    cout << "Original array:" << endl;
    printArray(arr);

    cout << "\nSorting process (Selection Sort):" << endl;
    selectionSort(arr);

    cout << "\nSorted array:" << endl;
    printArray(arr);

    return 0;
}
