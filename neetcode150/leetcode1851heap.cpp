class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        auto comp = [](const vector<int>& x, const vector<int>& y) {
            if(x[0] != y[0]){
                return x[0] > y[0];
            } else{
                return x[1] > y[1];
            }
        };
        priority_queue<vector<int>, vector<vector<int>>, decltype(comp)> pq(comp);
        unordered_map<int,int> map;
        vector<int> sortedQueries = queries;
        sort(intervals.begin(),intervals.end(),[](vector<int> x, vector<int>y){
            if(x[0] == y[0]){
                return x[1] < y[1];
            }
            return x[0] < y[0];
        });
        int c = 0;
        sort(sortedQueries.begin(),sortedQueries.end());
        for(const auto query : sortedQueries){
            while(c < intervals.size() && intervals[c][0] <= query){
                pq.push({intervals[c][1]-intervals[c][0]+1,intervals[c][1]});
                c++;
            }
            while(!pq.empty() && query > pq.top()[1]){
                pq.pop();
            }
            map[query] = pq.empty() ? -1 : pq.top()[0];
        }
        vector<int> fresult;
        fresult.reserve(queries.size());
        for(const auto query: queries){
            fresult.push_back(map[query]);
        }
        return fresult;
    }
};


