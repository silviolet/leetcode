class Solution {
public:
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        vector<vector<int>> dp = vector<vector<int>>(nums.size(),vector<int>(nums.size(),-1));
        return dfs(nums, 1, nums.size()-2, dp);
        }
    int dfs(vector<int>& nums, int l, int r, vector<vector<int>>& dp){
        if(l > r) return 0;
        if(dp[l][r] != -1) return dp[l][r];
        int best = 0;
        for(int i = l; i <= r; i++){
           int coins = nums[l-1]*nums[i]*nums[r+1];
           coins += dfs(nums, i+1, r, dp) + dfs(nums, l, i-1, dp);
           best = max(best, coins);
        }
        dp[l][r] = best;
        return dp[l][r];
    }
};
