class Solution {
    unordered_map<int, vector<pair<int, int>>> edges;
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        for(const auto& time : times){
            edges[time[0]].push_back(make_pair(time[1],time[2]));
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> minHeap;
        minHeap.push(make_pair(0, k));
        int total = 0;
        unordered_set<int> seen;
        while(!minHeap.empty()){
            pair<int, int> curTop = minHeap.top();
            minHeap.pop();
            int curNode = curTop.second, curWeight = curTop.first;
            if (seen.find(curNode) != seen.end()){
                continue;
            }
            total = curWeight;
            seen.insert(curNode);
            for (const auto& edge : edges[curNode]){
                if(seen.find(edge.first) == seen.end()){
                    minHeap.push(make_pair(curWeight + edge.second, edge.first));
                }
            }
        }
        return seen.size() == n ? total : -1;
    }

};
