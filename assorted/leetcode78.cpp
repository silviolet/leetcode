class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        helper(nums, res, cur, 0);
        return res;
    }
    void helper(vector<int> &nums, vector<vector<int>> &res, vector<int> &cur, int idx){
        if (idx == nums.size()){
            res.push_back(cur);
            return;
        }
        cur.push_back(nums[idx]);
        helper(nums, res, cur, idx + 1);
        cur.pop_back();
        helper(nums, res, cur, idx + 1);
    }
};