class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {ss.push(c);
            } else {
                if (ss.empty()) return false;
                char top = ss.top();
                ss.pop();
                if ((c == ')' && top != '(')|| (c == '}' && top != '{') ||(c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return ss.empty();
    }
};
