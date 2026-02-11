class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if (s.size() == 1) return false;
        string twice {s.substr(1, s.size() - 1) + s.substr(0, s.size() - 1)};
        return twice.find(s) != string::npos;
    }
};