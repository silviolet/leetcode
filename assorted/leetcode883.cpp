class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
       int front{0}, side{0}, top{0};
       // top
       for (const vector<int>& i : grid) {
        for (const int& v : i) {
            if (v) top++;
        }
       }
       // side
       for (int i = 0; i < grid.size(); i++) {
        int curmax{0};
        for (int j = 0; j < grid[i].size(); j++) {
            curmax = max(grid[i][j], curmax);
        }
        side += curmax;
       }
       // front
       for (int i = 0; i < grid.size(); i++) {
        int curmax{0};
        for (int j = 0; j < grid[i].size(); j++) {
            curmax = max(grid[j][i], curmax);
        }
        front += curmax;
       }
       return front + side + top;
    }
};