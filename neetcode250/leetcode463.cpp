class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ROWS = grid.size(), COLS = grid[0].size();
        int res = 0;
        for (int r = 0; r < ROWS; r++){
            for (int c = 0; c < COLS; c++){
                if (grid[r][c]) res += check(r, c, grid, ROWS, COLS);
            }
        }
        return res;
    }
    int check(int r, int c, vector<vector<int>>& grid, int ROWS, int COLS){
        vector<pair<int,int>> directions = {{0, 1}, {1, 0}, {-1, 0} , {0, -1}};
        int count = 0;
        for (const pair<int,int>& direction: directions){
            int newR = r + direction.first;
            int newC = c + direction.second; 
            if (newR < 0 || newC < 0 || newR >= ROWS || newC >= COLS || grid[newR][newC] == 0) count++;
        }
        return count;
    }
};