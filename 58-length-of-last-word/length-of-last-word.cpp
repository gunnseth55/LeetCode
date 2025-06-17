class Solution {
public:
    int lengthOfLastWord(string s) {
        int x=0;
       int i=s.length()-1;
       while(i>=0 && s[i]==' '){
        i--;
       }
       while(i>=0&&s[i]!=' ' ){
                x++;
                i--;
        }
        return x;
    }
};