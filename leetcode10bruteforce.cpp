class Solution {
public:
    bool isMatch(string s, string p) { 
        return dfs(0,0,s,p);
    }
    bool dfs(int i, int j, string& s, string& p){
        if(j == p.size()) return i == s.size();
        bool match = i < s.size() && (s[i] == p[j] || p[j] == '.');
        if (j + 1 < p.size() && p[j + 1] == '*'){
            return dfs(i, j + 2, s, p) || (match && dfs(i+1,j,s,p));
        }
        if (match){
            return dfs(i+1,j+1,s,p);
        } 
        return false;
    }
};
