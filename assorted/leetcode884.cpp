class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> res;
        unordered_map<string, int> seen;
        stringstream ss(s1);
        string cur;
        while (ss >> cur){
            seen[cur]++;
        }
        ss = stringstream(s2);
        while (ss >> cur) {
            seen[cur]++;
        }
        for (const auto &it : seen) {
            if (it.second == 1) res.push_back(it.first);
        }
        return res;
    }
};