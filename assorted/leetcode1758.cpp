class Solution {
public:
    int minOperations(string s) {
       int zerost = 0, onest = 0;
       char workingz = '0', workingo = '1';
       for (const char& c : s) {
        c != workingz ? zerost++ : onest++;
        swap(workingz, workingo);
       }
       return min(zerost, onest); 
    }
};