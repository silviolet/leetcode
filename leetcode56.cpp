class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        vector<int> previous = intervals[0];
        for(int i = 0; i < intervals.size(); i++){
            vector<int> current = intervals[i];
            if(previous[1] >= current[0]){
                current[0] = min(current[0], previous[0]);
                current[1] = max(current[1], previous[1]);
            } else {
                res.push_back(previous);
            }
            previous = current;
        }
        res.push_back(previous);
        return res;
    }
};
