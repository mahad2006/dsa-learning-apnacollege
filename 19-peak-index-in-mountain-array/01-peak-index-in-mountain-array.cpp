#include <iostream>
#include <vector>
using namespace std;

// Function to find the peak index in a mountain array
// A mountain array is one that increases then decreases,
// and the peak (maximum element) is never at the endpoints.
// Time Complexity: O(log n)
// Space Complexity: O(1)

int peakIndex(const vector<int> &arr)
{

    // Set boundaries to avoid checking the endpoints,
    // since in a mountain array the peak cannot be at index 0 or n-1.

    int start = 1;
    int end = arr.size() - 2;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Check if arr[mid] is greater than its neighbors.
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
            return mid;

        // If the slope is increasing, move right.
        else if (arr[mid] < arr[mid + 1])
            start = mid + 1;

        // If the slope is decreasing, move left.
        else
            end = mid - 1;
    }

    // If not found, return -1 (should not happen for a valid mountain array).
    return -1;
}

int main()
{
    // A proper mountain array (increases then decreases)
    vector<int> arr = {0, 2, 4, 6, 5, 3, 1};

    int index = peakIndex(arr);

    if (index != -1)
        cout << "Peak index: " << index << endl;
    else
        cout << "Peak index not found" << endl;

    return 0;
}
