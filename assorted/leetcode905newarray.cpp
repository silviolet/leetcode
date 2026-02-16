class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> res;
        for (const int& i : nums) {
            if (!(i % 2)) res.push_back(i);
        }
        for (const int& i : nums) {
            if (i % 2) res.push_back(i);
        }
        return res;
    }
};