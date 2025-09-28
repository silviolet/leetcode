class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int disCount = 0;
        string res = "";
        unordered_map<string, int> vals;
        for (const string& s : arr) {
            vals[s]++;
        }
        for (const string& s : arr) {
            if (vals[s] == 1) disCount++;
            if (disCount == k) return s;
        }
        return "";
    }
};