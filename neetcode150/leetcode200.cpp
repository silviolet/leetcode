class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for (int r = 0; r < grid.size(); r++){
            for (int c = 0; c < grid[r].size(); c++){
                if (dfs(r, c, grid)) count++;
            }
        }
        return count;
    }
    bool dfs(int r, int c, vector<vector<char>>& grid){
        if (r >= grid.size() || r < 0 || c < 0 || c >= grid[r].size() || grid[r][c] == '0') return false;
        grid[r][c] = '0';
        dfs(r + 1, c, grid);
        dfs(r - 1, c, grid);
        dfs(r, c + 1, grid);
        dfs(r, c - 1, grid);
        return true;
    }
};
