class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
       unordered_set<string> seen;
       for (const vector<string>& path : paths) {
        seen.insert(path[0]);
       }
       for(const vector<string>& path : paths) {
        if (seen.find(path[1]) == seen.end()) return path[1];
       }
       return "";
    }
};