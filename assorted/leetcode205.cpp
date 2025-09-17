class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        if (n != t.size()) return false;
        unordered_map<char,char> cmap;
        unordered_set<char> seen1;
        unordered_set<char> seen2;
        for(int i = 0; i < n; i++){
            seen1.insert(s[i]);
            seen2.insert(t[i]);
        }
        for(int i = 0; i < n; i++){
            char c = s[i];
            char comp = t[i];
            if(cmap.find(c) != cmap.end() && cmap[c] != comp) return false;
            cmap[c] = comp;
            if(seen1.find(c) != seen1.end() && seen2.find(comp) == seen2.end()) return false;
            seen1.erase(c);
            seen2.erase(comp);
        }
        return true;
    }
};