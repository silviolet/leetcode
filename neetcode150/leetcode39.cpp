class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> cur;
        dfs(res, nums, cur, 0, target, 0);
        return res;
    }
    void dfs(vector<vector<int>>& res, vector<int>& nums, vector<int>& cur, int index, int target, int total){
        if (total > target || index >= nums.size()) return;
        if (target == total){
            res.push_back(cur);
            return;
        }
        cur.push_back(nums[index]);
        dfs(res, nums, cur, index, target, total + nums[index]);
        cur.pop_back();
        dfs(res, nums, cur, index + 1, target, total);
        return;
    }
};
