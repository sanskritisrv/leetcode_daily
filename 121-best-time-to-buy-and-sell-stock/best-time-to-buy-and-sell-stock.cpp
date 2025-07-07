class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0]; // buy at the first price
        int maxProfit = 0;        // no profit initially

        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < minPrice) {
                minPrice = prices[i]; // found a better day to buy
            } else {
                int profit = prices[i] - minPrice; // potential profit
                if(profit > maxProfit) {
                    maxProfit = profit; // update max profit
                }
            }
        }
        return maxProfit;
    }
};
