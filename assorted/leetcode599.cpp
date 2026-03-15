class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
       vector<string> res; 
       int minSum{static_cast<int>((list1.size() - 1) + (list2.size()))};
       unordered_map<string, int> l1;
       for (int i = 0; i < list1.size(); i++) {
        l1[list1[i]] = i;
       }
       for (int i = 0; i < list2.size(); i++) {
        if (l1.contains(list2[i])) {
            if ((l1[list2[i]] + i) == minSum) {
                res.push_back(list2[i]);
            }
            else if ((l1[list2[i]] + i) < minSum) {
                minSum = l1[list2[i]] + i;
                res.clear();
                res.push_back(list2[i]);
            }
        }
       }
       return res;
    }
};