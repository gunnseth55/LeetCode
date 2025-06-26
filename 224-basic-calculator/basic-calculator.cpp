

class Solution {
public:
    bool isnum(char c) {
        return c >= '0' && c <= '9';
    }

    int calculate(string s) {
        stack<int> nums;
        stack<int> signs;
        int num = 0, result = 0, sign = 1;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (isnum(c)) {
                num = num * 10 + (c - '0');
            } else if (c == '+') {
                result += sign * num;
                num = 0;
                sign = 1;
            } else if (c == '-') {
                result += sign * num;
                num = 0;
                sign = -1;
            } else if (c == '(') {
                // Push current result and sign
                nums.push(result);
                signs.push(sign);
                result = 0;
                sign = 1;
            } else if (c == ')') {
                result += sign * num;
                result *= signs.top(); signs.pop();
                result += nums.top(); nums.pop();
                num = 0;
            }
        }

        result += sign * num;
        return result;
    }
};
