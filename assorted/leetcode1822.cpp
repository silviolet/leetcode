class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sum{1};
        for (const int& i : nums) {
            if (i == 0) return 0;
            if (i < 0) sum *= -1;
            if (i > 0) sum *= 1;
        }
        return sum;
    }
};