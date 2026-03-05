class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int row{1}, w{0};
        for (const char& c : s) {
            int cur {widths[c - 'a']};
            if (w + cur > 100) row++, w = cur;
            else w += cur;
        }
        return {row, w};
    }
};