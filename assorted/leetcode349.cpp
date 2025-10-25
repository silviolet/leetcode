class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen;
        vector<int> res;
        for (const auto& num : nums1) {
            seen.insert(num);
        }
        for (const auto& num : nums2) {
            if (seen.find(num) != seen.end()) {
                res.push_back(num);
                seen.erase(num);
            }
        }
        return res;
    }
};