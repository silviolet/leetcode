class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int state{0};
        for (const int& i : arr) {
            if (i % 2) {
                state++;
                if (state > 2) return true;
            }
            else state = 0;
        }
        return false;
    }
};