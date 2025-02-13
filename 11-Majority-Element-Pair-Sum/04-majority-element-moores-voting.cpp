#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element using Moore's Voting Algorithm
int findMajorityElement(vector<int>& nums) {
    int freq = 0, ans = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (freq == 0) {
            ans = nums[i];
        }
        if (ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }
    // Verifying if candidate is actually the majority element
    freq = 0;
    for (int num : nums) {
        if (num == ans) {
            freq++;
        }
    }
    
    if (freq > nums.size() / 2) {
        return ans;
    } else {
        return -1; // No majority element found
    }
}

int main() {
    vector<int> nums = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int result = findMajorityElement(nums);
    
    cout << "Majority element is: " << result << endl;
    
    return 0;
}
