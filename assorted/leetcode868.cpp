class Solution {
public:
    int binaryGap(int n) {
       int res{0}, cur{-1}; 
       while (n > 0) {
        if (n % 2){
            res = max(cur, res);
            cur = 1;
        }
        else {
            if (cur >= 0) cur++;
        }
        n /= 2;
       }
       return res;
    }
};