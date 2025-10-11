class Solution {
public:
    int reverse(int x) {
       bool neg = false;
       int res = 0;
       if (x < 0) {
        neg = true;
       }
       if (x == (-1 -INT_MAX)) return 0;
       while (abs(x) > 0) {
        int curval = abs(x % 10), temp = res;
        x /= 10;
        if (res > INT_MAX/10) return 0;
        res *= 10;
        res += curval;
        if (temp > res) return 0;
       }
       return neg ? -res : res;
    }
};