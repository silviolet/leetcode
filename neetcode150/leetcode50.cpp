class Solution {
public:
    double myPow(double x, int n) {
        double last = 1;
        bool lol = false;
        if (n < 0) {lol = true; n = abs(n);}
        while(n > 0){
            if(n % 2 == 0){
                x *= x;
                n /= 2;
            }
            else{
                last *= x;
                n--;
            }
        }   
        return lol ? 1/last : last;
    }
};
