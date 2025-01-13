#include <iostream>
#include <vector>
using namespace std;
int linearSearch(const vector<int> &vec, int target)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 23, 19};
    int target = 19;
    int index = linearSearch(vec, target);

    if (index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}