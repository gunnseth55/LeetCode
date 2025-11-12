class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        unordered_map<char,int>st;
        for(char xx='a';xx<='z';++xx){
            st[xx]=m;
        }
        for(int i=0;i<m-1;i++){
            st[needle[i]]=m-1-i;
        }


        int i=m-1;
        while(i<=n-1){
            int k=0;
            while(k<=m-1 && needle[m-1-k]==haystack[i-k]){
                k++;
            }
            if(k==m){
                return i-m+1;
            }else{
                i=i+st[haystack[i]];
            }


        }
        return -1;
    }
};