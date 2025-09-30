class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> seen;
        int res = 0;
        for (const auto& c : s) {
            if (seen.find(c) != seen.end()) {
                res += 2;
                seen.erase(c);
            }
            else seen.insert(c);
        }
        return res + (seen.size() > 0 ? 1 : 0);
    }
};