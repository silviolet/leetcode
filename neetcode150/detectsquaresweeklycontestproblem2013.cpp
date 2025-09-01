class CountSquares {
    unordered_map<long, int> ptscnt;
    vector<vector<int>> pts;
    long getKey(int x, int y){
        return (static_cast<long>(x) << 32 | static_cast<long>(y));
    }
public:
    CountSquares() {
    }
    
    void add(vector<int> point) {
        ptscnt[getKey(point[0],point[1])]++;
        pts.push_back(point);
    }
    
    int count(vector<int> point) {
        int res = 0;
        int x = point[0];
        int y = point[1];

        for(const auto& pt: pts){
            if(abs(x - pt[0]) == abs(y - pt[1]) && pt[0] != x && y != pt[1]) res += ptscnt[getKey(pt[0], y)] * ptscnt[getKey(x,pt[1])];
            
        }
        return res;
    }
};
