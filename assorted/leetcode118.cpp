class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for (int i = 1; i <= numRows; ++i){
            vector<int> curRow = vector<int>(i, 0);
            curRow[0] = curRow[i-1] = 1;
           for (int j = 1; j < i - 1; ++j){
            curRow[j] += res[i-2][j] + res[i-2][j-1];
           }
           res.push_back(curRow);
        }
        return res;
    }
};