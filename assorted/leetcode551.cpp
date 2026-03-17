class Solution {
public:
    bool checkRecord(string s) {
        int absences{0}, lates{0};
        for (const char & c : s) {
            if (c == 'A') {
                lates = 0;
                absences++;
                if (absences > 1) return false;
            }
            if (c == 'L') {
                lates++;
                if (lates > 2) return false;
            }
            else lates = 0;
        }
        return true;
    }
};