class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> all;
       for (const int& num : nums) {
        all.insert(num); 
       } 
       vector<int> res;
       for (int i = 1; i <= nums.size(); ++i) {
        if (all.find(i) == all.end()) {
            res.push_back(i);
        }
       }
       return res;
    }
};