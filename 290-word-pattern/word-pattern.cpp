class Solution {
public:
    bool wordPattern(string pattern, string s) {
       
        stringstream ss (s);
        vector<string>words;
        string word;
        while(ss>>word){
            words.push_back(word);
        }
         map<char, string> m;
         map<string,char>mm;
        if(pattern.size()!=words.size())return false;
        for(int i=0;i<pattern.size();i++){
            if(m.find(pattern[i])!=m.end() && m[pattern[i]]!=words[i]){
                    return false;
            }
            if(mm.find(words[i])!=mm.end() && mm[words[i]]!=pattern[i]){
                return false;
            }
           
                m[pattern[i]]=words[i];
                mm[words[i]]=pattern[i];    
         
        }
        return true;
    }
};