class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        
        int maxx=max(n,m);
        string result;
       for(int i=0;i<maxx;i++){
           
        if(i<n){
            result+=word1[i];
        }
       if(i<m){
            result+=word2[i];
        }
       
    }
     return result;
    }
};