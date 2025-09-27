class Solution {
public:
    int countSeniors(vector<string>& details) {
        int res = 0;
        for (const string& citizen : details){
            if ((citizen[11] - 'a' > '6' - 'a') || ((citizen[11] == '6') && citizen[12] - 'a' > '0' - 'a')) res++;
        }
        return res;
    }
};