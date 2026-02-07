class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        vector<char> row1 {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        vector<char> row2 {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        vector<char> row3 {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        unordered_set<char> set1 (row1.begin(), row1.end());
        unordered_set<char> set2 (row2.begin(), row2.end());
        unordered_set<char> set3 (row3.begin(), row3.end());
        unordered_set<char>* curSet {nullptr};
        for (const string& word : words) {
            for (int i = 0; i < word.size(); i++) {
                char c {static_cast<char>(tolower(word[i]))};
                if (i == 0) {
                    if (set1.contains(c)) curSet = &set1;
                    else if (set2.contains(c)) curSet = &set2;
                    else if (set3.contains(c)) curSet = &set3;
                    else break;
                }
                if (!curSet->contains(c)) break;
                if (i == word.size() - 1) res.push_back(word);
            }
        }
        return res;
    }
};