class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> res(num1.size()+num2.size(), 0);
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        for(int i = 0; i < num1.size(); i++){
            for(int j = 0; j < num2.size(); j++){
                int cur = (num1[i] - '0') * (num2[j] - '0');
                res[i + j] += cur;
                res[i+ j + 1] += res[i+j] / 10;
                res[i + j] %= 10;
            }
        }
        int i = res.size() - 1;
        while(i >= 0 && res[i] == 0){
            i--;
        }
        if (i < 0){
            return "0";
        }
        string strres = "";
        while (i >= 0){
            strres.push_back(res[i] + '0');
            i--;
        }
        return strres;
    }
};
