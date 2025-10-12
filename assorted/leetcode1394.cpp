class Solution {
public:
    int findLucky(vector<int>& arr) {
       unordered_map<int, int> count;
       int res = -1;
       for (const int& num : arr) {
        count[num]++;
       }
       for (const int& num : arr) {
        if (count[num] == num) res = max(res, num);
       }
       return res; 
    }
};