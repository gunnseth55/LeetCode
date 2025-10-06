class Solution {
public:
    string removeStars(string s) {
        stack<char>stk;
        for(char c:s){
            if(c=='*'){
                stk.pop();
            }
            else
            stk.push(c);
        }
        string result;
        while(!stk.empty()){
            result+=stk.top();
            stk.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};