#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

int main()
{

    int maxSum = INT_MIN;
    vector<int> arr = {1, 2, 3, 4, 5};

    // Brute force approach: Iterate through all possible subarrays
    for (int start = 0; start < arr.size(); start++)
    {
        int currSum = 0; // To store the sum of the current subarray
        for (int end = start; end < arr.size(); end++)
        {
            currSum += arr[end];           // Add the current element to the subarray sum
            maxSum = max(currSum, maxSum); // Update the maximum sum if needed
        }
    }

    cout << "The maximum sum of any subarray is: " << maxSum << endl;

    return 0;
}
