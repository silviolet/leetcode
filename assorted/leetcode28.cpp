class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), b = needle.size();
        if (b > n) return -1;
        for (int i = 0; i <= n - b; i++){
            int counter = 0;
            while (haystack[i + counter] == needle[counter]){
                if(counter == b - 1) return i;
               counter++; 
            }
        }
        return -1;
    }
};