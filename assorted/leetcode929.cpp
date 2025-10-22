class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> seen;
        for (const string& email : emails) {
            string cur = "";
            bool plus = false;
            bool at = false;
            for (const char& c : email) {
                if (at) {
                    cur.push_back(c);
                }
                else if (plus) {
                    if (c == '@') {
                        at = true;
                        cur.push_back('@');
                    }
                    else continue;
                }
                else {
                    if (c == '.') continue;
                    else if (c == '+') plus = true;
                    else if (c == '@') {
                        at = true;
                        cur.push_back(c);
                    }
                    else cur.push_back(c);
                }
            }
            seen.insert(cur);
        }
        return (seen.size());
    }
};