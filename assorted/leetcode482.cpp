class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int count{0};
        string res;
       for (const char& c : s) {
        if (((c >= '0' ) && (c <= '9')) || ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))) count++;
       }
       int it{count % k};
       if (!(count % k)) it = k;
       int p{0};
       while (count > 0) {
        char c{s[p]};
        if (((c >= '0' ) && (c <= '9')) || ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))) {
            if ((c >= 'a') && (c <= 'z')) res.push_back(c - 'a' + 'A');
            else res.push_back(c);
            count--;
            it--;
            }
        p++;
        if (count && it == 0) {
            it = k;
            res.push_back('-');
        }
       }
       return res;
    }
};