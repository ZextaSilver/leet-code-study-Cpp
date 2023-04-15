
int maxProfit(vector<int>& prices) {

    int low = prices[0];
    int profit = 0;
    
    for(int i = 0; i < prices.size(); i++)
    {
        if(prices[i] < low)
        {
            low = prices[i];
        }
        else if(prices[i] - low > profit)
        {
            profit = prices[i] - low;
        }

    }

    return profit;
}