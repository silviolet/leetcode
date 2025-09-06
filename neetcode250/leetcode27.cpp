class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
       for (int i = 0; i < nums.size(); i++){
        while (i < nums.size() && nums[i] == val){ 
            cout << nums[i] << " " << i;
            nums.erase(nums.begin() + i);
            count++;
        }
       } 
       return count;
    }
};