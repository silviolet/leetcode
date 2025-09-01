class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        vector<vector<bool>> seen(grid.size(), vector<bool>(grid[0].size(), false));
        return dfs(seen, grid, 0, 0, 0);
    }
    int dfs(vector<vector<bool>>& seen, vector<vector<int>>& grid, int r, int c, int t){
        if (r >= grid.size() || r < 0 || c >= grid[0].size() || c < 0 || seen[r][c]){
            return INT_MAX;
        }
        if (t < grid[r][c]) t = grid[r][c];
        if (r == grid.size() - 1 && c == grid[0].size() - 1) return t;
        seen[r][c] = true;
        int res = min(dfs(seen, grid, r + 1, c, t), min(dfs(seen, grid, r - 1, c, t ), min(dfs(seen, grid, r, c + 1, t),
         dfs(seen, grid, r, c - 1, t))));
        seen[r][c] = false;
        return res;
    }
};
