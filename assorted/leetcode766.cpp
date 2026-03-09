class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix[0].size(); i++) {
            for (int j = 1; (j < matrix.size()) && (j + i < matrix[j].size()); j++) {
               if (matrix[0][i] != matrix[j][j + i]) return false;
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 1; (j + i < matrix.size()) && (j < matrix[j + i].size()); j++) {
               if (matrix[i][0] != matrix[j + i][j]) return false;
            }
        }
        return true;
    }
};