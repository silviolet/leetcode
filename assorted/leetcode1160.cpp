class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int res = 0;
       unordered_map<char, int> bank;
       for (const char& c : chars) {
        bank[c]++;
       }
       for (const string& word : words) {
        unordered_map<char, int> newBank;
        for (const char& c : word) {
            newBank[c]++;
        }
        res += word.size();
        for (const auto& it : newBank) {
            if (it.second > bank[it.first]) {
                res -= word.size();
                break;
            }
        }
       }
       return res;
    }
};