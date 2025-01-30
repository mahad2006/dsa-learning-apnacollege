#include <iostream>
#include <vector>
using namespace std;
int findMajorityElement(vector<int> nums)
{
    int n = nums.size();

    for (int val : nums)
    {
        int count = 0;// Reset count for each element
        for (int element : nums)
        {
            if (element == val)
            {
                count++;
            }
        }
        // If count is more than n/2, return the majority element
        if (count > n / 2)
        {
            return val;
        }
    }
    return -1;// No Majority Element found
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