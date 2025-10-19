class Solution {
public:
    string largestGoodInteger(string num) {
        string res = "";
       for (int i = 0; i < num.size() - 2; i++) {
        if (num[i] == num[i+1] && num[i] == num[i+2]){
            if ((res == "") || (res[0] -'0' < num[i] - '0')) {
                res = "";
                res.push_back(num[i]);
                res.push_back(num[i]);
                res.push_back(num[i]);
            }
        }
       }
       return res;
    }
};