#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

int main()
{
    // Example array
    int arr[] = {23, 45, 12, 67, 34, 89, 19};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Method 1: Using INT_MAX and INT_MIN
    int minVal = INT_MAX, maxVal = INT_MIN;
    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i]; // Update min value if current element is smaller
            minIndex = i;
        }
        if (arr[i] > maxVal)
        {
            maxVal = arr[i]; // Update max value if current element is greater
            maxIndex = i;
        }
    }

    cout << "Using INT_MAX and INT_MIN:" << endl;
    cout << "Minimum value: " << minVal<<" ,At the index = "<< minIndex << endl;
    cout << "Maximum value: " << maxVal <<" ,At the index = "<< maxIndex<< endl;

    // Method 2: Using loop with min() and max() functions
    int minUsingFunc = INT_MAX, maxUsingFunc = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        minUsingFunc = min(minUsingFunc, arr[i]); // Update min value using min() function
        maxUsingFunc = max(maxUsingFunc, arr[i]); // Update max value using max() function
    }

    cout << "\nUsing loop with min() and max() functions:" << endl;
    cout << "Minimum value: " << minUsingFunc << endl;
    cout << "Maximum value: " << maxUsingFunc << endl;

    return 0;
}
