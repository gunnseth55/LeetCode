class Solution {
public:
bool isvowel(char c){
    
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
        }
    int maxVowels(string s, int k) {
        
        int maxx=INT_MIN;
        int count=0;
        for(int i=0;i<k;i++){
           if(isvowel(s[i]))count++;
        }
        maxx=max(maxx,count);
        for(int i=1;i<=s.length()-k;i++){
           if(isvowel(s[i-1]))count--;
           if(isvowel(s[i+k-1]))count++;
           maxx=max(maxx,count);
        }
        return maxx;
    }
};