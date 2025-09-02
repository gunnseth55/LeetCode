class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string ans;
        int start=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')count++;
            if(s[i]==')')count--;
            if(count==0){
                ans.append(s.substr(start+1,i-start-1));
                start=i+1;
            }
            if(count<0){
                count=0;
            }
        }
        return ans;
    }
};