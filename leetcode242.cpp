class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
       unordered_map<int,int> chars;
       unordered_map<int,int> chars2;
       for(int i = 0; i < s.size(); i++){
        chars[s[i]]++;
        chars2[t[i]]++;
       }
       return chars == chars2;
    }
};
