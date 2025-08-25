class Solution {
public:
    int maxSubArray(vector<int>& nums) { 
        int maxSum = nums[0], curSum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            curSum += nums[i];
            if (curSum < nums[i]) curSum = nums[i];
            maxSum = max(maxSum, curSum);
        }
        return maxSum;
    }
};
