class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (vector<int>& row : image) {
            for (int i = 0; i < ((row.size() + 1)/2); i++) {
                cout << i;
                if (i == ((row.size() - 1) - i)) row[i] = !row[i];
                else {
                    swap(row[i], row[row.size() - 1 - i]);
                    row[i] = !row[i];
                    row[row.size() - 1 - i] = !row[row.size() - 1 - i];
                }
            }
        }
        return image;
    }
};