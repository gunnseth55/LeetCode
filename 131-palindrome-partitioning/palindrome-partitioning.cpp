class Solution {
public:
    bool isPalindrome(const string &s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    vector<vector<string>> solve(const string &s) {
        if (s.empty()) return { {} };  // base case: one empty partition

        vector<vector<string>> result;
        for (int i = 1; i <= s.size(); i++) {
            string prefix = s.substr(0, i);
            if (isPalindrome(prefix)) {
                string rest = s.substr(i);
                vector<vector<string>> sub = solve(rest);
                for (auto &p : sub) {
                    vector<string> temp = {prefix};
                    temp.insert(temp.end(), p.begin(), p.end());
                    result.push_back(temp);
                }
            }
        }
        return result;
    }

    vector<vector<string>> partition(string s) {
        return solve(s);
    }
};
