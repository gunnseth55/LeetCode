class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m;
        unordered_map<char,char>mm;
        int n=s.length();
        int o=t.length();
        if(n!=o)return false;
        for(int i=0;i<n;i++){
            if(m.find(s[i])!=m.end()){
                char c=m[s[i]];
                if(c!=t[i]){
                return false;
                }else continue;
            }
            if( mm.find(t[i])!=mm.end()){
                char c=m[t[i]];
                if(c!=s[i]){
                return false;
                }else continue;
            }
            
                m.insert({s[i],t[i]});
           mm.insert({t[i],s[i]});
        }
        return true;
    }
};