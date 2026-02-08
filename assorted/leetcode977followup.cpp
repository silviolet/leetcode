class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        int pos{0};
        while (pos < nums.size() && nums[pos] < 0) ++pos;
        int neg{pos - 1};
        while (pos < nums.size() || neg >= 0) {
            if (pos < nums.size() && neg >= 0) {
                if (abs(nums[neg]) < nums[pos]) {
                    res.push_back(nums[neg] * nums[neg]);
                    neg--;
                }
                else {
                    res.push_back(nums[pos] * nums[pos]);
                    pos++;
                }
            }
            else if (pos < nums.size()) {
                res.push_back(nums[pos] * nums[pos]);
                pos++;
            }
            else {
                res.push_back(nums[neg] * nums[neg]);
                neg--;
            }
        }
        return res;
    }
};