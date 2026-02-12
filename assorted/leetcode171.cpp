class Solution {
public:
    int titleToNumber(string columnTitle) { 
        int res{0}, cur{1};
        unordered_map<char, int> charMap;
        for (int i = 0; i < 26; i++) {
            charMap['A' + i] = i + 1;
        }
        for (int i = columnTitle.size() - 1; i >= 0; i--) {
            res += (cur*charMap[columnTitle[i]]);
            if (i == 0) break;
            cur *= 26;
        }
        return res;
    }
};