class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int res{1}, cur{1}, last{nums[0]};
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > last) {
                cur++;
                res = max(cur, res);
            }
            else cur = 1;
            last = nums[i];
        }
        return res;
    }
};