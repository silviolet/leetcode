class Solution {
public
    int eraseOverlapIntervals(vectorvectorint& intervals) {
        sort(intervals.begin(), intervals.end());
         revisit
        int pend = intervals[0][1];
        int res = 0;
        for(int i = 1; i  intervals.size(); i++){
            int cstart = intervals[i][0];
            int cend = intervals[i][1];
            if(pend  cstart){
                pend = min(pend,cend);
                res++;
            } else{
                pend = cend;
            }
        }
        return res;
    }
};
