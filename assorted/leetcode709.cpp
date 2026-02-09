class Solution {
public:
    string toLowerCase(string s) {
        unordered_map<char, char> mp;
        for (int i = 0; i < 26; i++) {
            mp['A' + i] = 'a' + i;
        }
        for (int i = 0; i < s.size(); i++) {
            if (mp.contains(s[i])) s[i] = mp[s[i]];
        }
        return s;
    }
};