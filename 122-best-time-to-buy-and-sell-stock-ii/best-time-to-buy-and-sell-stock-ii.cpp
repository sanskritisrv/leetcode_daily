class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                profit=profit+(prices[i]-prices[i-1]);
            }
        }
        return profit;

    //the difference in approach in this and previous is yaha we can buy anad sell multiple times and there we can buy and sell only once .
    }
};