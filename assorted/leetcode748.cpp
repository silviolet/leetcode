class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char, int> license;
        string res;
        unordered_set<char> banned{'0','1','2','3','4','5','6','7','8','9',' '};
        for (const char& c : licensePlate) {
            if (banned.contains(c)) continue;
            if ((c >= 'A')  && (c <= 'Z')) license[c + 'a' - 'A']++;
            else license[c]++;
        } 
        for (const string& word : words) {
            unordered_map<char, int> match;
            for (const char& c : word) {
                match[c]++;
            }
            bool flag {true};
            for (const auto& it : license) {
                if (match[it.first] < it.second) {
                    flag = false;
                    break;
                }
            }
            if (flag && ((res == "") || (res.size() > word.size()))) res = word;
        }
        return res;
    }
};