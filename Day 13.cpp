//leetcode problem best time to buy and sell stocks
class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxProfitValue = 0;
        int minPrice = prices[0];
        for (int& currentPrice : prices) 
        {
             maxProfitValue = max(maxProfitValue, currentPrice - minPrice);
             minPrice = min(minPrice, currentPrice);
        }
        return maxProfitValue;
    }
};
