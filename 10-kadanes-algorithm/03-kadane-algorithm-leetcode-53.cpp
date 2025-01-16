#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxSum = INT_MIN; // Initialize to the smallest integer
    int currSum = 0;      // Variable to store current sum of subarray

    // Loop through each element of the array
    for (int num : nums)
    {
        currSum = max(num, currSum + num); // Either start a new subarray or extend the current subarray
        maxSum = max(maxSum, currSum);     // Update the max sum ....
    }

    return maxSum;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // Example input array
    int result = maxSubArray(nums);                     // Calling Kadane’s Algorithm
    cout << "The maximum sum of the subarray is: " << result << endl;
    return 0;
}
