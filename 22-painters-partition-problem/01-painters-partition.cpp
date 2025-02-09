#include <iostream>
#include <vector>
using namespace std;

// Function to check if it is possible to paint all boards within
// maxAllowedTime using at most m painters.
// Time Complexity: O(n)
// Space Complexity: O(1)

bool isPossible(const vector<int> &arr, int n, int m, int maxAllowedTime)
{
    int painters = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time + arr[i] <= maxAllowedTime)
            time += arr[i];
        else
        {
            painters++;
            time = arr[i];
        }
    }
    return (painters <= m);
}

// Function to find the minimum time required to paint all boards.
// Uses binary search on the range [max(arr), sum(arr)].
// Time Complexity: O(n log(sum))
// Space Complexity: O(1)

int minTimeToPaint(const vector<int> &arr, int n, int m)
{
    int sum = 0, maxValue = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxValue = max(maxValue, arr[i]);
    }

    int start = maxValue, end = sum, ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> A = {40, 30, 10, 20};
    int n = A.size(), m = 2;

    cout << minTimeToPaint(A, n, m) << endl;
    return 0;
}
