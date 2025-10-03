class Solution {
public:
    int appendCharacters(string s, string t) {
        int tIndex = 0, tSize = t.size();
        for (const char& c : s) {
            if (c == t[tIndex]) tIndex++;
        }
        return (tSize < tIndex) ? 0 : tSize - tIndex;
    }
};