class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        for(int i=0;i<=s.length()-k;i++){
            bool res=true;
            for(int j=1;j<k;j++){
                if(s[i+j]!=s[i+j-1]){
                    res=false;
                }
            }
            if(!res)continue;

          if(i>0 && s[i]==s[i-1])continue;
          if(i+k<s.length() && s[i+k]==s[i])continue;
          return true;
        }
        return false;
    }
};