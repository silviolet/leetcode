class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
       for (int num : nums) {
        if (num < 0) num *= -1;
        if (!(nums[num - 1] < 0)) nums[num - 1] *= -1;
       }
       for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) res.push_back(i + 1);
       }
       return res;
    }
};