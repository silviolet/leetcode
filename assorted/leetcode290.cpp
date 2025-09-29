class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> umap;
        unordered_set<string> seen;
        vector<string> words;
        int pos = 0, end = s.size(), startpos = 0;
        while (pos < end) {
            pos++;
            if (pos == end){
                words.push_back(s.substr(startpos, pos - startpos));
            }
            if (s[pos] == ' '){
                words.push_back(s.substr(startpos, pos - startpos));
                pos++;
                startpos = pos;
            }
        }
        int n = pattern.size();
        if (words.size() != n) return false;
        for (int i = 0; i < n; ++i) {
            if (umap.find(pattern[i]) == umap.end()){
                if(seen.count(words[i]) < 1){
                    umap[pattern[i]] = words[i];
                    seen.insert(words[i]);
                }
                else return false;
            }
            else if (umap[pattern[i]] != words[i]) return false;
        }
        return true;
    }
};