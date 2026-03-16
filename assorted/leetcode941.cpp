class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if ((arr.size() < 3) || (arr[0] > arr[1])) return false;
        bool phase{false};
        int last{arr[0]};
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == last) return false;
            if (!phase) {
                if (arr[i] < last) phase = true;
            }
            else {
                if (arr[i] > last) return false;
            }
            last = arr[i];
        }
        return phase;
    }
};