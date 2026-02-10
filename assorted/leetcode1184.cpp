class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int forwards{0}, backwards{0};
        // forwards
       for (int i = start; i != destination; (i = (i + 1) % distance.size())) {
        forwards += distance[i];
       }
       // backwards
       for (int i = destination; i != start; (i = (i + 1) % distance.size())) {
        backwards += distance[i];
       }
       return min(forwards, backwards);
    }
};