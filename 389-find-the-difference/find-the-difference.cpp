class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        char result='\0';
        int n=s.length();
        int m=t.length();
        while(i<n && i<m){
            if(s[i]!=t[i]){
               return t[i];
            }
            i++;
        }
        return t[m-1];
    }
};