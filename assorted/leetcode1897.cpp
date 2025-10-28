class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int len = words.size();
        unordered_map<char, int> seen;
        for (const string& word : words) {
            for (const char& c : word) {
                seen[c]++;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (seen['a' + i] % len) return false;
        }
        return true;
    }
};