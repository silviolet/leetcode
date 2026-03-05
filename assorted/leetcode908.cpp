class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mi{nums[0]}, ma{nums[0]};
        for (int i = 1; i < nums.size(); i++) {
            mi = min(mi, nums[i]);
            ma = max(ma, nums[i]);
        }
        if ((ma - (2*k)) > mi) return ma - (2*k) - mi;
        return 0;
    }
};