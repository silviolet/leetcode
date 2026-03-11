class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       vector<int> subarraySum(nums.size() + 1, 0); 
       for (int i = 0; i < nums.size(); i++) {
        subarraySum[i + 1] = nums[i] + subarraySum[i];
       }
       for (int i = 0; i < nums.size(); i++) {
        if (subarraySum[i] == (subarraySum[nums.size()]) - subarraySum[i + 1]) return i;
       }
       return -1;
    }
};