class Solution {
public:
    int myAtoi(string s) {
       long long result=0;
        int n=s.length();
      int index=0,sign=1;
        while(index<n && s[index]== ' '){
            index++;
        }
        if(s[index]=='+'){
            sign=1;
            index++;
        }else if(s[index]=='-'){
            sign=-1;
            index++;
        }

        while(index<n && isdigit(s[index])){
            int x=s[index]-'0';
            result=(result*10)+x;
            if(sign*result<=INT_MIN){
                return INT_MIN;
            }
            if(sign*result>=INT_MAX){
                return INT_MAX;
            }
            index++;
        }

      return static_cast<int>(result*sign);
        
    }
};