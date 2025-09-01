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
    bool canAttendMeetings(vector<Interval>& intervals) {
        for(const Interval& val1 : intervals){
            for(const Interval& val2 : intervals){
                if(!(&val1 == &val2) && val1.start == val2.start && val1.end == val2.end) return false;
                if (val1.start < val2.end && val1.end > val2.end) return false;
            }
        }
        return true;
    }
};
