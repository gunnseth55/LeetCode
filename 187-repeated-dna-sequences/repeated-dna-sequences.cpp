class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>result;
        unordered_map<string, int>ss;
        for(int i=0;i+10<=s.length();i++){
           string t=s.substr(i,10);
           ss[t]++;
                if(ss[t] == 2){
                     result.push_back(t);
                }
              
        }
        return result;
    }
};