class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> cur;
        sort(candidates.begin(), candidates.end());
        helper(res, candidates, target, cur, 0);
        return res;
    }
    void helper (vector<vector<int>> &res, vector<int> &candidates, int target, vector<int> &cur, int idx) {
        if (target < 0) return;
        if (target == 0) {
            res.push_back(cur);
            return;
        }
        for (int i = idx; i < candidates.size(); i++) {
            int val{candidates[i]};
            if ((i - idx) > 0 && candidates[i] == candidates[i - 1]) continue;
            cur.push_back(val);
            helper(res, candidates, target - val, cur, i + 1);
            cur.pop_back();
        }
    }
};