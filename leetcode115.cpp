class Solution {
private:
    vector<vector<int>> dp;
public:
    // revisit for sure
    int numDistinct(string s, string t) {
        if(t.size() > s.size()) return 0;
        dp = vector<vector<int>>(s.size(),vector<int>(t.size(),-1));
        return dfs(0,0,s,t);
    }
    int dfs(int i, int j, string& s, string& t){
        if (j == t.size()) return 1;
        if (i == s.size()) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        int res = dfs(i+1,j,s,t);
        if(s[i] == t[j]){
            res += dfs(i+1,j+1,s,t);
        }
        dp[i][j]= res;
        return res;
    }
};
