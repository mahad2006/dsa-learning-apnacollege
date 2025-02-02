/*
    Problem: Leetcode 238 - Product of Array Except Self
    Approach: Optimized O(n) Time, O(1) Space
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    // Step 1: Calculate prefix products and store in ans array
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        ans[i] = prefix;
        prefix *= nums[i];
    }

    // Step 2: Multiply with suffix products while iterating from right
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    // Output the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
