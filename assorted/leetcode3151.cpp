class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1) return true;
        if (nums.size() == 2) return ((nums[0] % 2) != (nums[1] % 2));
        for (int i = 1; i < nums.size(); i++) {
            int cur = nums[i] % 2;
            if ((nums[i-1] % 2) == cur) return false;
        }
        return true;
    }
};