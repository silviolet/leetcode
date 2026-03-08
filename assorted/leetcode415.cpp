class Solution {
public:
    string addStrings(string num1, string num2) {
        string res;
        if (num2.size() > num1.size()) swap(num1, num2);
        bool carry {false};
        int point{0};
        while (point < num2.size()) {
            char c{static_cast<char>(num2[num2.size() - 1 - point] + carry + num1[num1.size() - 1 - point] - '0')};
            if ((c >= '0') && (c <= '9')) {
                carry = false;
                res.push_back(c);
            }
            else {
                carry = true;
                res.push_back(c - 10);
            }
            point++;
        }
        while (point < num1.size()) {
            char c{static_cast<char>(carry + num1[num1.size() - 1 - point])};
            if ((c >= '0') && (c <= '9')) {
                carry = false;
                res.push_back(c);
            }
            else {
                carry = true;
                res.push_back(c - 10);
            }
            point++;
        }
        if (carry) res.push_back('1');
        reverse(res.begin(), res.end());
        return res;
    }
};