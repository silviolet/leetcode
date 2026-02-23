class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
       unordered_set<string> unusable(banned.begin(), banned.end());
       unordered_set<char> ignore{' ', '!', '?', ',', ';', '.', '\''};
       unordered_map<string, int> freq;
       unordered_map<char, char> captolower;
       for (int i = 0; i < 26; i++) {
        captolower['A' + i] = 'a' + i;
        }
       string cur;
       for (const char& c : paragraph) {
        if (ignore.contains(c) && cur.size()) {
            if (!unusable.contains(cur)) freq[cur]++;
            cur = "";
            }
        else if (!ignore.contains(c)) {
            if (captolower.contains(c)) cur.push_back(captolower[c]);
            else cur.push_back(c);
        }
       }
       if (!cur.empty() && !unusable.contains(cur)) freq[cur]++;
       string res;
       int curmax {0};
       for (const auto& it : freq) {
        if (it.second > curmax) {
            curmax = it.second;
            res = it.first;
        }
       }
       return res;
    }
};