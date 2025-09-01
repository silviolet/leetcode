class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> resMap;
        for(int i = 0; i < nums.size(); i++){
            resMap[nums[i]] = i;
        }
        for(int i = 0; i< nums.size(); i++){
            if (resMap.find(target-nums[i]) != resMap.end() && i != resMap[target-nums[i]]){
                res.push_back(i);
                res.push_back(resMap[target-nums[i]]);
                break;
            }
        }
        return res;
    }
};
