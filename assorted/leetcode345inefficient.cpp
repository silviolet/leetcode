class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> check {'a','e','i','o','u','A','E','I','O','U'};
        vector<char> vowels;
        for (const char& c: s) {
            if (check.contains(c)) vowels.push_back(c);
        }
        int it{0};
        while (vowels.size() > 0) {
            if (check.contains(s[it])) {
                s[it] = vowels[vowels.size() - 1];
                vowels.pop_back();
            }
            it++;
        }
        return s;
    }
};