class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res{};
        vector<int> cur{};
        vector<bool> used(nums.size(), false);
        helper(nums, res, cur, used);
        return res;
    }
    void helper(vector<int> &nums, vector<vector<int>> &res, vector<int> &cur, vector<bool> &used) {
        if (cur.size() == nums.size()) {
            res.push_back(cur);
            return;
        }
        unordered_set<int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int num{nums[i]};
            if (seen.contains(num) || used[i]) continue;
            seen.insert(num);
            used[i] = true;
            cur.push_back(num);
            helper(nums, res, cur, used);
            cur.pop_back();
            used[i] = false;
        }
    }
};