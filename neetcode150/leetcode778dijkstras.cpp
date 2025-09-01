class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        priority_queue<vector<int>, vector<vector<int>>, greater<>> minHeap;
        vector<vector<int>> directions = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        set<pair<int,int>> seen;
        minHeap.push({grid[0][0], 0, 0});
        while (!minHeap.empty()){
            vector<int> cur = minHeap.top();
            minHeap.pop();
            int t = cur[0], r = cur[1], c = cur[2];
            if (r == grid.size() - 1 && c == grid[0].size() - 1) return t;
            for(const auto& dir : directions){
                int dR = r + dir[0], dC = c + dir[1];
                if(dR < 0 || dC < 0 || dR >= grid.size() || dC >= grid[0].size() || seen.count({dR, dC})) continue;
                seen.insert({dR, dC});
                minHeap.push({max(t, grid[dR][dC]), dR, dC});
            }
        }
        return -1;
    }
};
