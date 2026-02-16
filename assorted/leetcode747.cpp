class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int mx{-1}, mx2{-1}, res{-1};
       for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > mx) {
            mx2 = mx;
            mx = nums[i];
            res = i;
        }
        else if (nums[i] > mx2) mx2 = nums[i];
       }
       if (mx >= 2 *mx2) return res;
       return -1;
    }
};