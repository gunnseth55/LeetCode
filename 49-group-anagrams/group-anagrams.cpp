class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        map<string,vector<string>>m;
        for(auto &s:strs){
            string temp=s;
            sort(temp.begin(),temp.end());
           
                m[temp].push_back(s);
            
        }
        for(auto &s:m){
            result.push_back(s.second);
        }
        return result;
    }
};