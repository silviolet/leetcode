class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        int count = 0;
        if (strs[0].length() == 0) return prefix; 
        while(true){ 
            if (strs[0].size() <= count) return prefix;
            char cur = strs[0][count];
            for(const auto& str: strs){
                if(count >= str.size() || str[count] != cur) return prefix;
            }
            prefix += cur;
            count++;
        }
    }
};