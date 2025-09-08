class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> seen;
        for (int i = 0; i < nums.size(); i++){
            int curVal = nums[i];
            if (seen.find(curVal) != seen.end()) for (const int& j : seen[curVal]) if (abs(i - j) <= k) return true;
            seen[curVal].push_back(i);
        }
        return false; 
    }
};