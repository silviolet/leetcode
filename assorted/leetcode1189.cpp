class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int res = 0;
        unordered_map<char, int> seen;
        for (const char& c : text) seen[c]++;
        while (true){
           if (seen['b']-- < 1) return res;
           if (seen['a']-- < 1) return res;
           seen['l'] -= 2;
           seen['o'] -= 2;
           if (seen['l'] < 0) return res;
           if (seen['o'] < 0) return res;
           if (seen['n']-- < 1) return res;
           res++;
        }
        return res; 
    }
};