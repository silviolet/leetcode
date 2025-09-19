class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // revisit for sure, no clue how this works
        vector<vector<int>> res;
        if (nums.empty()) return {{}};
        vector<int> tmp = vector<int>(nums.begin()+1, nums.end());
        vector<vector<int>> perms = permute(tmp);

        for(auto& perm : perms){
            for (int i = 0; i < perm.size()+1; i++) {
                vector<int> p_copy = perm;
                p_copy.insert(p_copy.begin() + i, nums[0]);
                res.push_back(p_copy); 
            }
        }
        return res;
    }
};
