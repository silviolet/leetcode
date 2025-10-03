class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0, curr = 0;
        for (const int& i : nums) {
            if(i) curr++;
            else curr = 0;
            res = max(curr, res);
        }
        return res;
    }
};