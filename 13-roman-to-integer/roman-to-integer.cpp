class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        if(s.length()==0){
            return result;
        }
        map<char,int>m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',  1000}};
        for(int i=0;i<s.length();i++){
            int curr=m[s[i]];
            int next=m[s[i+1]];
            if(next<=curr){
                result+=curr;
            }else{
                result-=curr;
            }
        }
        return result;
    }
};