class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        bool first = true;
        // revisit
        for(int i = 0; i < intervals.size(); i++){
            if (newInterval[1] < intervals[i][0]){
                if(first){
                    first = false;
                    res.push_back(newInterval);
                }
                res.push_back(intervals[i]);
            }
            else {
                if (newInterval[0] > intervals[i][1]){
                    res.push_back(intervals[i]);
                }
                else{
                    newInterval[0] = min(intervals[i][0], newInterval[0]);
                    newInterval[1] = max(intervals[i][1], newInterval[1]);
                }
            }
        }
        if (first){
            res.push_back(newInterval);
        }
        return res;
    }
};
