class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> outbound(n + 1, 0);
        vector<int> inbound(n + 1, 0);
        for (const vector<int>& pair : trust) {
            outbound[pair[0]]++;
            inbound[pair[1]]++;
        }
        for (int i = 1; i <= n; i++) {
            if ((outbound[i] == 0) && (inbound[i] == (n - 1))) return i;
        }
        return -1;
    }
};