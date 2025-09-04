class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int cur = nums[0];
        for(const int& num : nums){
            if(num == cur) count++;
            else count--;
            if(count == 0){
                cur = num;
                count++;
            }
        }
        return cur;
    }
};