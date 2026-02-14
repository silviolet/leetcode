class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        unordered_set<int> seen(nums.begin(), nums.end());
        vector<int> cur;
        helper(nums, seen, res, cur);
        return res;
    }
    void helper(vector<int>& nums, unordered_set<int> &seen, vector<vector<int>>& res, vector<int>& cur) {
        if (seen.size() == 0) {
            res.push_back(cur);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            int temp {nums[i]};
            if (seen.contains(temp)) {
                cur.push_back(temp);
                seen.erase(temp);
                helper(nums, seen, res, cur);
                cur.pop_back(); 
                seen.insert(temp);
            }
        }

    }
};