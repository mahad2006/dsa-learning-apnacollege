#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMajorityElement(vector<int> nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n / 2)
        {
            return ans;
        }
    }
    return -1; // No Majority Element found
}
int main()
{
    vector<int> nums = {2, 2, 1, 1, 2, 2, 2, 1, 1}; // Example input
    int majority = findMajorityElement(nums);

    if (majority != -1)
        cout << "Majority Element: " << majority << endl;
    else
        cout << "No Majority Element found" << endl;

    return 0;
}