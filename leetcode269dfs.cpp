class Solution {
    unordered_map<char, unordered_set<char>> adj;
    unordered_map<char, bool> visited;
    string res;
public:
    string foreignDictionary(vector<string>& words) {
       for(const auto& word : words){
        for(char letter: word){
            adj[letter];
        }
       }
       for(int i = 0; i < words.size() - 1; i++){
        string w1 = words[i], w2 = words[i + 1];
        int minLength = min(w1.size(), w2.size());
        if (w1.size() > w2.size() && w1.substr(0, minLength) == w2.substr(0, minLength)) return "";
        for(int j = 0; j < minLength; j++){
            if (w1[j] != w2[j]){
                adj[w1[j]].insert(w2[j]);
                break;
            }
        }
       }
       for(const auto& pair: adj){
        if(dfs(pair.first)) return "";
       }
       reverse(res.begin(), res.end());
       return res;
    }
    bool dfs(char start){
        if (visited.find(start) != visited.end()) return visited[start];
        visited[start] = true;
        for(const auto& neighbour : adj[start]){
            if(dfs(neighbour)) return true;
        }
        visited[start] = false;
        res.push_back(start);
        return false;
    }
};
