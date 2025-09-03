class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
       unordered_map<int, int> sums;
       for (int i = 0; i < n; i++){
        int cur = nums[i];
        if (sums.find(target - cur) != sums.end()) return {sums[target - cur], i};
        sums[cur] = i;
       }
       return {-1,-1};
    }
};
