#include <iostream>
#include <vector>
using namespace std;

/*
 * Recursive Binary Search
 * -------------------------
 * Time Complexity: O(log n)
 * Space Complexity: O(log n) due to recursion stack
 *
 * This function recursively searches for 'target' in a sorted vector 'arr'
 * between indices 'start' and 'end'. It returns the index of the target if found,
 * or -1 if not found.
 */
int binarySearchRecursive(const vector<int> &arr, int target, int start, int end)
{
    if (start > end)
    {
        return -1; // Base case: target not found
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid; // Target found
    }
    else if (arr[mid] < target)
    {
        return binarySearchRecursive(arr, target, mid + 1, end);
    }
    else
    {
        return binarySearchRecursive(arr, target, start, mid - 1);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 6;

    int index = binarySearchRecursive(arr, target, 0, arr.size() - 1);

    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
