class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isDecreasing{false}, isIncreasing{false};
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i-1]) isIncreasing = true;
            if (nums[i] < nums[i-1]) isDecreasing = true;
        }
        return !(isIncreasing && isDecreasing);
    }
};