class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
       if (n%2) {
        int cur {0};
        res.push_back(0);
        while (res.size() < n) {
            cur++;
           res.push_back(-cur);
           res.push_back(cur);
        }
       }
       else {
        int cur {1};
        while (res.size() < n) {
            res.push_back(cur);
            res.push_back(-cur);
            cur++;
        }
       }
       return res;
    }
};