class Solution {
private:
    vector<vector<int>> dp;
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp = vector<vector<int>>(word1.size()+1, vector<int>(word2.size()+1, 0));        
        for(int i = word1.size(); i >= 0; i--){
            dp[i][word2.size()] = word1.size() - i;
        }
        for(int i = word2.size(); i >= 0; i--){
            dp[word1.size()][i] = word2.size() - i;
        }
        for(int i = word1.size()-1; i >= 0 ; i--){
            for(int j = word2.size()-1; j >= 0; j--){
                if(word1[i] == word2[j]){
                    dp[i][j] = dp[i+1][j+1];
                }
                else{
                    dp[i][j] = 1 + min(min(dp[i+1][j],dp[i][j+1]),dp[i+1][j+1]);
                }
            }
        }
        return dp[0][0];
    }
};
