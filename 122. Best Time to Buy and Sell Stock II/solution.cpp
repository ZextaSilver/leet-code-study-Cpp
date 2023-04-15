
int maxProfit(vector<int>& prices) {
    int profit = 0;
    int low = prices[0];
    int size = prices.size();


    for(int i = 1; i < size; i++)
    {
        if(prices[i] < prices[i - 1])
        {
            profit += prices[i - 1] - low;
            low = prices[i];
        }
        if(i == size - 1)
        {
            profit += prices[i] - low;
        }
    }


    return profit;
}