class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       unordered_set<char> allowed_set;
       int res = words.size();
       for (const char& c : allowed) {
        allowed_set.insert(c);
       }
       for (const string& word : words) {
        for (const char& c : word) {
            if (allowed_set.find(c) == allowed_set.end()) {
                res--;
                break;
            }
        }
       }
       return res;
    }
};