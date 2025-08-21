/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), [](Interval x, Interval y) {
            return x.start < y.start;
        });
        priority_queue<int, vector<int>, greater<int>> pq;
        int res = 0;
        for(int i = 0; i < intervals.size(); i++){
            while(!pq.empty() && pq.top() <= intervals[i].start){
                pq.pop();
            }
            pq.push(intervals[i].end);
            res = max(static_cast<int>(pq.size()),res);
        }
        return res;
    }
};
