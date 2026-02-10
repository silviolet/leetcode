class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res {0};
        for (const int& num : nums) {
            if (evenDigits(num)) res++;
        }
        return res;
    }
    constexpr bool evenDigits(int num) {
        // num will never be 0 per problem description
        int digits {0};
        while (num > 0) {
            digits++;
            num /= 10;
        }
        return !(digits % 2);
    }
};