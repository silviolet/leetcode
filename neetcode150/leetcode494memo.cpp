class Solution {
private: 
    long getHash(int i, int j){
        return static_cast<long>(j) << 32 | static_cast<unsigned int>(i);
    }
    unordered_map<long,int> memo;
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return backtrack(0,0,nums,target);
    }
    int backtrack(int i, int total, vector<int>& nums, int target){
        if(memo.find(getHash(i,total)) != memo.end()){
            return memo[getHash(i,total)];
        }
        if(i == nums.size()) return total==target;
        memo[getHash(i,total)] = backtrack(i+1,total-nums[i],nums,target) + backtrack(i+1,total+nums[i],nums,target);
        return memo[getHash(i,total)];
    }
};
