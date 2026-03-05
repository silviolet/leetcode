class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (((i % 2) && (nums[i] % 2)) || (!(i % 2) && !(nums[i] % 2))) continue;
            int it{i + 1};
            if (i % 2) {
                while (!(nums[i] % 2)) swap(nums[i], nums[it++]);
            }
            else {
                while (nums[i] % 2) swap(nums[i], nums[it++]);
            }
        }
        return nums; 
    }
};