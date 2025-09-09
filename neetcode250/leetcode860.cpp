class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> change;
       for (const auto& bill : bills){
        if(bill == 5){
            change[5]++;
            continue;
        }
        if (bill == 10){
            if (change[5] == 0) return false;
            else {
                change[5]--;
                change[10]++;
            }
        }
        if (bill == 20){
            if(change[10] >= 1 && change[5] >= 1){
                change[5]--;
                change[10]--;
            }
            else if (change[5] >= 3) change[5] -= 3;
            else return false;
        }
       }
       return true;  
    }
};