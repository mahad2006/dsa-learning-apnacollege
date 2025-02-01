// Leetcode Problem No. 11: Container With Most Water
// This solution uses the Two Pointer Approach to find the maximum water area between two lines

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> lines = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = lines.size();   // Size of the vector (number of containers)
    int maxWaterArea = 0;   // Variable to store the maximum water area
    int lp = 0, rp = n - 1; // Left pointer (lp) and Right pointer (rp)

    while (lp < rp)
    {
        int width = rp - lp;                           // Calculate width (distance between the two pointers)
        int height = min(lines[rp], lines[lp]);        // Minimum height of the two containers
        int currentArea = width * height;              // Calculate the area for the current pair of containers
        maxWaterArea = max(maxWaterArea, currentArea); // Update maxWaterArea if currentArea is larger

        // Move the pointer with the smaller height to maximize the area
        if (lines[lp] > lines[rp])
        {
            rp--; // Move the right pointer to the left
        }
        else
            lp++; // Move the left pointer to the right
    }

    // Output the maximum water area found
    cout << maxWaterArea << endl;

    return 0;
}
