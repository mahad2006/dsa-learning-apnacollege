#include <iostream>
#include <vector>
using namespace std;

// Function to search for a target in a rotated sorted array.
// Returns the index of the target if found; otherwise, returns -1.
// Time Complexity: O(log n)
// Space Complexity: O(1)

int searchRotatedSortedArray(const vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Check if the target is at mid.
        if (arr[mid] == target)
            return mid;

        // Determine which half is sorted:
        if (arr[start] <= arr[mid])
        {
            // Left half is sorted.
            // Check if the target lies within the sorted left half.
            if (target >= arr[start] && target < arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            // Right half must be sorted.
            // Check if the target lies within the sorted right half.
            if (target > arr[mid] && target <= arr[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    // Target not found.
    return -1;
}

int main()
{
    // Example rotated sorted array.
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = searchRotatedSortedArray(arr, target);

    if (index != -1)
        cout << "Target found at index " << index << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
