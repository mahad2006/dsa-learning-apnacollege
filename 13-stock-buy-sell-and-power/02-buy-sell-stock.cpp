#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};  // Stock prices array
    int bestBuy = prices[0];  // Initialize the bestBuy with the first price
    int maxProfit = 0;  // Initialize maxProfit to 0

    for (int i = 1; i < prices.size(); i++)  
    {
        if (prices[i] < bestBuy)  // If current price is lower, update bestBuy
        {
            bestBuy = prices[i];  
        }
        else
        {
            // Calculate profit and update maxProfit if the current profit is greater
            int profit = prices[i] - bestBuy;  
            maxProfit = max(maxProfit, profit); 
        }
    }

    cout << "Best Buy = " << bestBuy << endl;
    cout << "Maximum Profit = " << maxProfit << endl;
    return 0;
}
