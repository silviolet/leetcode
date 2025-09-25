class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = 0, r = 0, n = s.size(), k = t.size();
        while (l != n && r != k){
            if (s[l] == t[r]){
                l++;
                r++;
            }
            else r++;
        }
        if (l == n) return true;
        return false;
    }
};