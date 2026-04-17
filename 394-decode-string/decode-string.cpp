class Solution {
public:
   string solve(string &s,int &index){
        string result="";
        int num=0;
        
        while(index<s.length()){
            if(isdigit(s[index])){
                num=(num*10)+(s[index]-'0');
                index++;
            }else if(s[index]=='['){
                index++;
                string temp=solve(s,index);
                for(int i=0;i<num;i++){
                    result+=temp;
                }
                num=0;
            }else if(s[index]==']'){
                index++;
                return result;

            } else{
                result+=s[index];
                index++;
                
            }
        }
        return result;
    }
    string decodeString(string s) {
       int i=0;
        return solve(s,i);
    }
};