class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if (s.size() == 1) return false;
        for (int i = 1; i < s.size()/2 + 1; i++) {
            string sub {s.substr(0, i)};
            int point{0};
            for (int j = 0; j < s.size(); j++) {
                if (sub[point] == s[j]) {
                    point++;
                    if (point == sub.size()) point = 0;
                    if ((j == (s.size() - 1)) && (point == 0)) return true;
                }
                else break;
            }
        }
        return false;
    }
};