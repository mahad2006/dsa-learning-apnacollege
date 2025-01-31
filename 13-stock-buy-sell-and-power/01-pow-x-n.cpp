#include <iostream>
using namespace std;
double myPow(double x, int n)
{
    long binForm = n;
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;
    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }

    double ans = 1;

    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}
int main()
{
    double x = 2.0;
    int n = 10;
    cout << "Result: " << myPow(x, n) << endl; // Output: 1024
    return 0;
}