class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int mark{static_cast<int>(arr.size()) / 4};
        if (arr.size() == 1) return arr[0];
        int count{0}, curr{arr[0]};
        for (const int& num : arr){
            if (num == curr) count++;
            else {
                count = 1;
                curr = num;
            }
            if (count > mark) return curr;
        }
       return -1;
    }
};