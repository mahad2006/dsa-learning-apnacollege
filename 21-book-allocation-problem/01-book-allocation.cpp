#include <iostream>
#include <vector>
using namespace std;

// Function to check if it is possible to allocate books such that
// no student reads more than maxAllowedPages.
// Time Complexity: O(n)
// Space Complexity: O(1)

bool isValid(const vector<int> &A, int n, int m, int maxAllowedPages)
{
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        // If a single book has more pages than allowed, return false.
        if (A[i] > maxAllowedPages)
            return false;
        // Accumulate pages if within limit; otherwise, assign to next student.
        if (pages + A[i] <= maxAllowedPages)
            pages += A[i];
        else
        {
            students++;
            pages = A[i];
        }
    }
    return (students <= m);
}

// Function to allocate books so that the maximum pages allocated to any student is minimized.
// Uses binary search over the range [0, sum of pages] to find the optimal maximum.
// Time Complexity: O(n log(sum))
// Space Complexity: O(1)

int allocateBooks(const vector<int> &A, int n, int m)
{
    if (m > n)
        return -1;

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += A[i];

    int start = 0, end = sum, ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isValid(A, n, m, mid))
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
    vector<int> A = {2, 1, 3, 4};
    int n = A.size(), m = 2;

    cout << allocateBooks(A, n, m) << endl;
    return 0;
}
