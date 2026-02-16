class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res {0};
        unordered_set<char> j(jewels.begin(), jewels.end());
        for (const char& stone : stones) {
            if (j.contains(stone)) res++;
        }
        return res;
    }
};