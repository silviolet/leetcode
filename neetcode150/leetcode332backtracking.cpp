class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        sort(tickets.begin(), tickets.end());
        unordered_map<string, vector<string>> adj;
        for(const auto& ticket : tickets){
            adj[ticket[0]].emplace_back(ticket[1]);
        }
        vector<string> res;
        res.push_back("JFK");
        res.reserve(tickets.size());
        string cur = "JFK";
        dfs(cur, res, tickets, adj);
        return res;
    }
    bool dfs(string& cur, vector<string>& res, vector<vector<string>>& tickets, unordered_map<string, vector<string>>& adj){
        if (res.size() == tickets.size() + 1) return true;
        if (adj.find(cur) == adj.end()) return false;
        vector<string> temp = adj[cur];
        for (int i = 0; i < temp.size(); i++){
            string newCur = adj[cur][i];
            res.emplace_back(newCur);
            adj[cur].erase(adj[cur].begin() + i);
            if (dfs(newCur, res, tickets, adj)) return true;
            res.pop_back();
            adj[cur].insert(adj[cur].begin() + i, newCur);
        }
        
        return false;
    }
};
