class Solution {
public:
    string reverseOnlyLetters(string s) {
       int l{0}, r{static_cast<int>(s.size() - 1)};
       unordered_set<char> allowed;
       for (int i = 0; i < 26; i++) allowed.insert('a' + i), allowed.insert('A' + i);
       while (l < r) {
        bool left{allowed.contains(s[l])}, right{allowed.contains(s[r])};
        if (!left && !right) l++, r--;
        else if (left && right) swap(s[l], s[r]), l++, r--;
        else if (!left) l++;
        else r--;
       }
       return s;
    }
};