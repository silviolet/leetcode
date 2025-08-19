class Solution {
private:
    vector<vector<int>> dp;
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int res = 0;
        dp = vector<vector<int>>(matrix.size(), vector<int>(matrix[0].size(), -1));
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                res = max(res, dfs(i,j,matrix, -1));
            }
        }
        return res;
    }
    int dfs(int i, int j, vector<vector<int>>& matrix, int prev){
        int ROWS = matrix.size(), COLS = matrix[0].size();
        if(!(i < ROWS && j < COLS && j >= 0 && i >= 0 && matrix[i][j] > prev)){
            return 0;
        }
        if(dp[i][j] != -1) return dp[i][j];
        int res = 0;
        vector<vector<int>> directions = {{0,1},{1,0},{-1,0},{0,-1}};
        for(const vector<int>& direction: directions){
            res = max(res, dfs(i + direction[0], j + direction[1], matrix, matrix[i][j]));
        }
        dp[i][j] = res+1;
        return res+1;
    }
};
