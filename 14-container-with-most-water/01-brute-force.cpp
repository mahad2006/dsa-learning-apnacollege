#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> containerHeights = {1, 8, 6, 2, 5, 4, 8, 3, 7};  
    int numContainers = containerHeights.size();  
    int maxWaterArea = 0;  // To store the maximum water area

    // Loop to check all pairs of containers
    for (int i = 0; i < numContainers; i++)
    {
        for (int j = i + 1; j < numContainers; j++)
        {
            int width = j - i;  // Calculate the width between the containers
            int height = min(containerHeights[i], containerHeights[j]);  // Minimum height of the two containers
            int currentArea = width * height;  // Calculate the area for the current pair of containers
            maxWaterArea = max(maxWaterArea, currentArea);  // Update maxWaterArea if currentArea is larger
        }
    }

    cout << maxWaterArea << endl;  // Output the maximum water area

    return 0;
}
