class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (flowerbed.size() == 1 && flowerbed[0] == 1) return n == 0;
        for (int i = 0; i < flowerbed.size(); ++i) {
            bool cur = flowerbed[i];
            if ((i == 0 || flowerbed[i - 1] == cur) && ((i == flowerbed.size() - 1) || flowerbed[i + 1] == cur)) {
                n--;
                flowerbed[i] = !cur;
            }
        }
        cout << n;
        return n <= 0;
    }
};