#include <iostream>
#include <vector>
using namespace std;

/*
 * Iterative Binary Search
 * -------------------------
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 *
 * This function searches for 'target' in a sorted vector 'arr' using
 * the iterative binary search approach.
 */
int binarySearchIterative(const vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Prevents overflow

        if (arr[mid] == target)
        {
            return mid; // Target found
        }
        else if (arr[mid] < target)
        {
            start = mid + 1; // Target must be to the right
        }
        else
        {
            end = mid - 1; // Target must be to the left
        }
    }
    return -1; // Target not found
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 6;

    int index = binarySearchIterative(arr, target);

    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
