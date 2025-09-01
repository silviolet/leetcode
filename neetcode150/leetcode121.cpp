class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxProfit = 0;
       int lowest = prices[0];
       for (int i = 1; i < prices.size(); i++){
        maxProfit = max(maxProfit, prices[i] - lowest);
        if (prices[i] < lowest) lowest = prices[i];
       }
       return maxProfit;
    }
};
