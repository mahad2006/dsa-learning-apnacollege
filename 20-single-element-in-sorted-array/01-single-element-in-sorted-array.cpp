#include <iostream>
#include <vector>
using namespace std;

// Function to find the index of the single element in a sorted array
// where every element appears twice except one.
// Time Complexity: O(log n)
// Space Complexity: O(1)

int singleElement(const vector<int> &A)
{
    // If the array has only one element, return its index.
    if (A.size() == 1)
        return 0;

    int start = 0, end = A.size() - 1;

    // Check boundaries in case the unique element is at the beginning or end.
    if (A[0] != A[1])
        return 0;
    if (A[end] != A[end - 1])
        return end;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Ensure mid is not at the boundaries before accessing neighbors.
        if (mid > 0 && mid < A.size() - 1)
        {
            // If A[mid] is unique (not equal to either neighbor), return mid.
            if (A[mid - 1] != A[mid] && A[mid] != A[mid + 1])
                return mid;
        }

        // Use pairing logic: in a correct pair, the first occurrence is at an even index.
        if (mid % 2 == 0)
        {
            // If mid is even and its left neighbor equals it,
            // then the unique element is in the left half.
            if (A[mid] == A[mid - 1])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            // If mid is odd and equals its left neighbor,
            // the unique element is in the right half.
            if (A[mid] == A[mid - 1])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    // Return -1 if not found (shouldn't happen for valid input).
    return -1;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5};
    int index = singleElement(arr);

    if (index != -1)
        cout << "Single Element " << arr[index] << " at index: " << index << endl;
    else
        cout << "Single element not found" << endl;

    return 0;
}
