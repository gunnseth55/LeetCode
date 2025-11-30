class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stk;
        for(char c:s){
            if(stk.empty()){
                stk.push(c);
                }else{
                if(stk.top()==c){
                    stk.pop();
                    continue;
                }else{
                    stk.push(c);
                }
            }
        }
        string res;

        while(!stk.empty()){
           res.push_back(stk.top());
            stk.pop();
        }
       
         reverse(res.begin(),res.end());
         return res;
    }
};