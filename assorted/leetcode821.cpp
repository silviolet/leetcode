class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> pos, res(s.size(), 0);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c) pos.push_back(i);
        }
        int left{0};
        for (int i = 0; i < s.size(); i++) {
            if (left == pos.size() - 1 ) {
                res[i] = abs(i - pos[left]);
            }
            else {
                res[i] = min(abs(i - pos[left]), abs(i - pos[left+1]));
                if (i == pos[left + 1]) left++;
            }
        }
        return res;
    }
};