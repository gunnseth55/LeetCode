class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())return false;
        map<char,int>m1;
        map<char,int>m2;
        for(char c:word1){
            m1[c]++;
        }
        for(char c:word2){
            m2[c]++;
        }
        if (m1.size() != m2.size()) return false;
        for (auto &p : m1) {
            if (m2.find(p.first) == m2.end()) {
                return false;
            }
        }
        vector<pair<char,int>>v1(m1.begin(),m1.end());
        vector<pair<char,int>>v2(m2.begin(),m2.end());
        
        sort(v1.begin(),v1.end(),[](auto &m1, auto &m2){
            return m1.second>m2.second;
        });
        sort(v2.begin(),v2.end(),[](auto &m1,  auto &m2){
            return m1.second>m2.second;
        });
        if(v1.size()!=v2.size())return false;
        for(int i=0;i<v1.size();i++){
            if(v1[i].second!=v2[i].second){
                return false;
            }
        }
    return true;
    }
};