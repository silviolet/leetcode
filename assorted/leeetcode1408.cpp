class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
       unordered_set<string> res;
       vector<string> fin;
       for (int i = 0; i < words.size(); ++i) {
        string cur = words[i];
        for (int j = 0; j < words.size(); ++j) {
            if (i == j) continue;
            if (cur.find(words[j]) != string::npos) res.insert(words[j]);
        }
       }
       for (const auto& strn : res) {
        fin.push_back(strn);
       }
       return fin;
    }
};