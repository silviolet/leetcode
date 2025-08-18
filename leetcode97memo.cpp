class Solution {
private:
    vector<vector<int>> dp;
public:
    bool isInterleave(string s1, string s2, string s3) {
        dp = vector<vector<int>>(s1.size()+1, vector<int>(s2.size()+1, -1));
        return backtrack(0,0,0,s1,s2,s3);
    }
    bool backtrack(int i, int j, int k, string& s1, string& s2, string& s3){
        if (dp[i][j] != -1){
            return dp[i][j];
        }
        if (k == s3.size()){
            return (i == s1.size() && j == s2.size());
        }
        bool res = false;
        if (i < s1.size() && s1[i] == s3[k]){
            if(backtrack(i+1,j,k+1,s1,s2,s3)) res = true;
        }
        if (j < s2.size() && s2[j] == s3[k]){
            if(backtrack(i,j+1,k+1,s1,s2,s3)) res = true;
        }
        dp[i][j] = res;
        return res;

    }
};
