class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        unordered_map<int, vector<pair<int,int>>> adj;
        for (int i = 0; i < points.size(); i++){
            int x1 = points[i][0], y1 = points[i][1];
            for(int j = i + 1; j < points.size(); j++){
                int x2 = points[j][0], y2 = points[j][1];
                int dist = abs(x1-x2) + abs(y1-y2);
                adj[i].emplace_back(dist, j);
                adj[j].emplace_back(dist, i);
            }
        }
        unordered_set<int> seen;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> minHeap;
        int res = 0;
        minHeap.push({0,0});
        while(seen.size() < points.size()){
            int curPoint = minHeap.top().second;
            int curCost = minHeap.top().first;
            minHeap.pop();
            if (seen.count(curPoint)) continue;
            res += curCost;
            seen.insert(curPoint);
            for(const pair<int, int>& nei : adj[curPoint]){
               if (seen.count(nei.second)) continue; 
               minHeap.push(nei);
            }
        }
        
        return res;
    }
};
