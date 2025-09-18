class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        dfs(nums, res, curr, 0);
        return res; 
    }
    void dfs(vector<int>& nums, vector<vector<int>>& subsets, vector<int>& curr, int index){
        if (index == nums.size()){
            subsets.push_back(curr);
            return;
        }
        curr.push_back(nums[index]);
        dfs(nums, subsets, curr, index + 1);
        curr.pop_back();
        dfs(nums,subsets, curr, index + 1);
    }
};
