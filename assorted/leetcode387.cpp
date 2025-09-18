class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> seen;
        for (int i = 0; i < s.size(); i++){
            if (seen.find(s[i]) != seen.end()) seen[s[i]] = -1;
            else seen[s[i]] = i;
        }
        int smallest = -1;
        for (const auto& pai : seen){
            if (pai.second == -1) continue;
            if (smallest != -1) smallest = min(smallest, pai.second);
            else if (smallest == -1 && pai.second != -1) smallest = pai.second;
        }
        return smallest; 
    }
};