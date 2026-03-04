class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<long> record; 
        for (const string& op : operations) {
            if (op == "+") record.push_back(record[static_cast<int>(record.size() - 1)] + record[static_cast<int>(record.size() - 2)]);
            else if (op == "D") record.push_back(record[static_cast<int>(record.size() - 1)] * 2);
            else if (op == "C") record.pop_back();
            else record.push_back(static_cast<long>(stoi(op)));
        }
        long res{0};
        for (const long& num : record) {
            res += num;
        }
        return static_cast<int>(res);
    }
};