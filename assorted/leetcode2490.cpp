class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> split;
        int cur = 0;
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == ' ') {
                split.push_back(sentence.substr(cur, i - cur));
                cur = i + 1;
            }
            if (i == sentence.size() - 1) {
                split.push_back(sentence.substr(cur, i - cur + 1));
            }
        }
        for(int i = 1; i < split.size(); i++) {
            if (split[i-1][split[i-1].size() - 1] != split[i][0]) return false;
        }
       return sentence[sentence.size() - 1] == sentence[0];
    }
};