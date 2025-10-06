class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
       int first = longestIncreasing(nums);
       int second = longestDecreasing(nums);
       return max(first, second);
    }
    int longestIncreasing(vector<int>& nums) {
        int res = 1, curmax = 1, prev = nums[0], n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] > prev) curmax++;
            else curmax = 1; 
            res = max(res, curmax);
            prev = nums[i];
        }
        return res;
    }
    int longestDecreasing(vector<int>& nums) {
        int res = 1, curmax = 1, prev = nums[0], n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] < prev) curmax++;
            else curmax = 1; 
            res = max(res, curmax);
            prev = nums[i];
        }
        return res;
    }
};