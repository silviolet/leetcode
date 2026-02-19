class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res{0}, buyPrice{prices[0]};
        for (const int i : prices){
            if (buyPrice > i) buyPrice = i;
            else {
                res += i - buyPrice;
                buyPrice = i;
            }
        }
        return res;
    }
};