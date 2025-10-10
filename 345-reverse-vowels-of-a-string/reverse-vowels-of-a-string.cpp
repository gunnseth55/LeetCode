class Solution {
public:
    bool isvowel(char c){
        return c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U';
    }
    string reverseVowels(string s) {
        vector<char>vec;
        for(int i=0;i<s.length();i++){
            if(isvowel(s[i])){
                vec.push_back(s[i]);
                s[i]='*';
            }
        }
       
        for(int i=0;i<s.length();i++){
            if(s[i]=='*'){
               char c=vec.back();
                s[i]=c;
                vec.pop_back();
            }
        }
        return s;
    }
};