#include <iostream>
#include <vector>
using namespace std;

/*
 * Problem: Single Number (LeetCode #136)
 * ---------------------------------------
 * Given a non-empty array of integers where every element appears twice except for one,
 * find the single number that does not have a pair.
 * 
 * Approach:
 * - Use XOR operator to find the single number in O(n) time with O(1) extra space.
 * - XOR properties:
 *   1. a ^ a = 0 (any number XORed with itself is 0)
 *   2. a ^ 0 = a (any number XORed with 0 remains the same)
 *   3. XOR is commutative and associative, so the order of operations doesn't matter.
 */

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num; // XOR all numbers
    }
    return result;
}

int main() {
    // Test case
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single number is: " << singleNumber(nums) << endl;

    return 0;
}
