class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length(),n=t.length();
        if(m==n){
            return s==t?true:false;
        }
        int i=0,j=0;
        while(i<m && j<n){
            if(s[i]==t[j]){
                i++;
                j++;
            }else{
                j++;
            }

        }
        if(i!=m)return false;
        else
        return true;
    }
};