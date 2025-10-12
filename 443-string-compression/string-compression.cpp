class Solution {
public:
    
    int compress(vector<char>& chars) {
        vector<char>result;
       
        vector<pair<char,int>>pp;
        char c=chars[0];
        int count=1;
        for(int i=1;i<chars.size();i++){
            if(chars[i]==c){
                count++;
            }else{
                pp.push_back({c,count});
                c=chars[i];
                count=1;
            }
        }         
        pp.push_back({c,count});  
        for(auto &p:pp){
            if(p.second==1){
                result.push_back(p.first);
            }else if(p.second>1){
                int num=p.second;
                result.push_back(p.first);
                int c=(num==0)?1:(int)log10(num)+1;
                for(int i=c-1;i>=0;i--){
                    int div=pow(10,i);
                    int digit=num/div;
                    result.push_back('0'+digit);
                    num%=div;
                }
            }
        }
        chars=result;
        return chars.size();
    }
};