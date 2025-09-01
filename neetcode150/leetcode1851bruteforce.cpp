class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
       sort(intervals.begin(), intervals.end(), [](vector<int> x, vector<int> y) {
        return x[0] == y[0] ? x[1] < y[1] : x[0] < y[0];
       });
       vector<int> res = vector<int>(queries.size(), -1);
       for(int i = 0; i < queries.size();i++){
        for(const auto& interval : intervals){
            if (interval[0] <= queries[i] && queries[i] <= interval[1]){
                if(res[i] == -1){
                    res[i] = interval[1] - interval[0] +1;
                }
                else{
                    res[i] = min(res[i], interval[1]-interval[0]+1);
                }
            }
        }
       }
       return res;
    }
};
