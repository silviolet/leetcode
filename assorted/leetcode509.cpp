class Solution {
public:
    int fib(int n) {
        if (n == 0 || n == 1) return n;
        int two{0}, one{1};
        for (int i = 2; i <= n; i++) {
            int temp {one};
            one += two;
            two = temp;
        }
        return one;
    }
};