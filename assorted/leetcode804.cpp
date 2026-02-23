class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int res{0};
        unordered_set<string> vals; 
        vector<string> ctom{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for (const string& word : words) {
            string morse;
            for (const char& c : word) {
                morse += (ctom[c - 'a']);
            }
            vals.insert(morse);
        }
        for (const string& s : vals) {
            res++;
        }
        return res;
    }
};