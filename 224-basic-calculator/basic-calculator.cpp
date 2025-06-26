class Solution {
    
public:

 bool isnum(char c){
    return c>='0'&& c<='9';
 }
    int calculate(string s) {
        stack<int> number;
        stack<int>signn;
        long num=0;
        int res=0;
        int sign=1;
        for(int i=0;i<s.length();i++){

            char c=s[i];
            if(isnum(c)){
                num=(num*10)+(c-'0');
            }
            else if(c=='+'){
                res+=sign*num;
                sign=1;
                num=0;
            }else if(c=='-'){
                res+=sign*num;
                num=0;
                sign=-1;
            }else if(c=='('){
                number.push(res);
                signn.push(sign);
                sign=1;
                num=0;
                res=0;

            }else if(c==')'){
                res+= num*sign;
                res= number.top()+signn.top()*res;
                number.pop();

                
                signn.pop();
                num=0;
                
            }


        }
        res+=num*sign;
        return res;
    }
    

};