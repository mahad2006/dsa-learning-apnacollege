// Leetcode 238 - Product of Array Except Self
// Approach: Brute Force (Two Loops)
// Time Complexity: O(n^2)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4}; // Example array
    int n = nums.size();
    vector<int> result(n, 1); // To store the product of array except self

    // Outer loop
    for (int i = 0; i < n; i++)
    {
        // Inner loop to calculate product except self
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                result[i] *= nums[j];
            }
        }
    }

    // Print the result array
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
