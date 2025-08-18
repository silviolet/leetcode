class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        // revisit
        unordered_map<int,int> dp;
        dp[0] = 1;
        for(const int num: nums){
            unordered_map<int,int> ndp;
            for(const auto& duo: dp){
                int sum = duo.first;
                int count = duo.second;
                ndp[sum + num] += duo.second;
                ndp[sum - num] += duo.second;
            }
            dp = ndp;
        }
        return dp[target];
    }
};
