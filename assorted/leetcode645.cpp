class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       unordered_map<int,int> seen;
       vector<int> res = vector<int>(2);
       for (const int& num : nums) {
        seen[num]++;
       } 
       for (int i = 1; i <= nums.size(); ++i) {
        if (seen[i] == 2) res[0] = i;
        if (!seen[i]) res[1] = i;
       }
       return res;
    }
};