class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int original {image[sr][sc]};
        image[sr][sc] = color;
        if (original == color) return image;
        if (sr + 1 < image.size() && original == image[sr + 1][sc])
            floodFill(image, sr + 1, sc, color);
        if (sr - 1 >= 0 && original == image[sr - 1][sc])
            floodFill(image, sr - 1, sc, color);
        if (sc + 1 < image[0].size() && original == image[sr][sc + 1])
            floodFill(image, sr, sc + 1, color);
        if (sc - 1 >= 0 && original == image[sr][sc - 1])
            floodFill(image, sr, sc - 1, color);
        return image;
    }
};