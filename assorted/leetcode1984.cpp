class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0, r = l + k-1, n = nums.size(), res = INT_MAX;
        while (r  < n){
            res = min(res, nums[r] - nums[l]);
            l++;
            r++;
        }
        return res;
    }
};