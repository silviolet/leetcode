class Solution {
public:
    int countSegments(string s) {
        bool isSpace{true};
        int res {0};
        for (const char& c : s) {
            if (c == ' ') isSpace = true;
            else if (isSpace) {
                    res++;
                    isSpace = false;
            }
        }
        return res;
    }
};