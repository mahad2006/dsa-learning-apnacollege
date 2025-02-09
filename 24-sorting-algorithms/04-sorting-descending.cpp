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

// Bubble Sort (Descending)
// Repeatedly swaps adjacent elements if they are in the wrong order.
// Time Complexity: O(n^2)
// Space Complexity: O(1)
void bubbleSortDescending(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            // For descending order, swap if the current element is less than the next.
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Selection Sort (Descending)
// Repeatedly selects the maximum element from the unsorted portion and swaps it
// with the first element of that portion.
// Time Complexity: O(n^2)
// Space Complexity: O(1)
void selectionSortDescending(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxIndex])
                maxIndex = j;
        }
        if (maxIndex != i)
            swap(arr[i], arr[maxIndex]);
    }
}

// Insertion Sort (Descending)
// Builds the sorted array one element at a time by inserting each element into its proper position.
// Time Complexity: O(n^2) in worst-case, O(n) in best-case
// Space Complexity: O(1)
void insertionSortDescending(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        // Shift elements that are smaller than key to the right.
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    vector<int> original = {4, 1, 5, 2, 3};

    // Create copies of the original array for each sort.
    vector<int> arrBubble = original;
    vector<int> arrSelection = original;
    vector<int> arrInsertion = original;

    cout << "Original array:" << endl;
    printArray(original);

    // Apply Bubble Sort (Descending)
    bubbleSortDescending(arrBubble);
    cout << "\nBubble Sort (Descending):" << endl;
    printArray(arrBubble);

    // Apply Selection Sort (Descending)
    selectionSortDescending(arrSelection);
    cout << "\nSelection Sort (Descending):" << endl;
    printArray(arrSelection);

    // Apply Insertion Sort (Descending)
    insertionSortDescending(arrInsertion);
    cout << "\nInsertion Sort (Descending):" << endl;
    printArray(arrInsertion);

    return 0;
}
