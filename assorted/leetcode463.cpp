class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int res = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j]) {
                    // left
                    if (j == 0 || !grid[i][j - 1]) res++;
                    // right
                    if (j == grid[i].size() - 1 || !grid[i][j + 1]) res++;
                    // up
                    if (i == 0 || !grid[i - 1][j]) res++;
                    // down
                    if (i == grid.size() - 1  || !grid[i + 1][j]) res++;
                }
            }
        }
        return res;
    }
};