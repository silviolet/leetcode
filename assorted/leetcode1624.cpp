class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
       int res = -1;
       unordered_map<char, int> seen;
       for (int i = 0; i < s.size(); ++i) {
        if (seen.find(s[i]) == seen.end()) {
            seen[s[i]] = i;
        }
        else res = max(res, i - seen[s[i]] - 1);
       }
       return res; 
    }
};