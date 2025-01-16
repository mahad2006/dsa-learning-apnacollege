#include <iostream>
#include <vector>
using namespace std;

void printSubarrays(const vector<int> &arr)
{
    int n = arr.size();

    // Outer loop for starting point of subarray
    for (int start = 0; start < n; ++start)
    {
        // Inner loop for ending point of subarray
        for (int end = start; end < n; ++end)
        {
            // Print elements of the subarray

            for (int k = start; k <= end; ++k)
            {
                cout << arr[k];
            }
            cout<<" ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "All Subarrays:" << endl;
    printSubarrays(arr);

    return 0;
}
