class Solution {
public:
    vector<int> diStringMatch(string s) {
       int l{0}, r{static_cast<int>(s.size())};
       vector<int> res(s.size() + 1, 0);
       for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'D') res[i] = r--;
        else res[i] = l++;
       }
       res[s.size()] = l;
       return res;
    }
};