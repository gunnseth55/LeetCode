class Solution {
public:
        bool isDigit(char c){
            return c>='0' && c<='9';
        }
    string clearDigits(string s) {
        string result="";
        for(char c:s){
            if(isDigit(c)){
                    if(!result.empty()){
                        result.pop_back();
                    }}else{
                        result.push_back(c);
                    }
            
        }
        return result;
    }
};