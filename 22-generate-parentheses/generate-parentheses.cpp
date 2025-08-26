class Solution {
public:
void rec(vector<string>& res,string &str,  int open, int close){
    
    if(open==0 && close==0){
    
        res.push_back(str);
     
        return;
    }
   
   if(open>0){
    str.push_back('(');

 rec(res,str,open-1,close);
 str.pop_back();
   }
    if(close>open){
        str.push_back(')');
 rec(res,str,open,close-1);
    str.pop_back();
    }
   
}
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        if(n<0)return res;
      
        string s;
       rec(res,s,n,n);
        return res;
    }
};