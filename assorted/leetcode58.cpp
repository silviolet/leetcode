class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = 0;
        int count = 0;
        for(const char& c : s){
            if (c == ' ' && count != 0){
                last = count;
                count = 0;
            }
            else if (c == ' ') count = 0;
            else count++;
        }
        return count == 0 ? last : count;
    }
};