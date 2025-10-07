class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       vector<int> res = vector<int>(2), valmap = vector<int>(grid.size() * grid.size() + 1);
       for (const vector<int>& row : grid) {
        for(const int& val : row) {
            valmap[val]++;
            if (valmap[val] == 2) res[0] = val;
        }
       }
       for (int i = 1; i < valmap.size(); ++i) {
        if (!valmap[i]) res[1] = i;
       }
       return res;
    }
};