class Solution {
public:
    string frequencySort(string s) {
        sort(s.begin(),s.end());
        map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        vector<pair<char,int>>vec(m.begin(),m.end());
       sort(vec.begin(),vec.end(),[](const pair<char,int>&p1, const pair<char,int>&p2){
            return p1.second>p2.second;
        });
        string ans;
        for(auto x:vec){
            string temp(x.second,x.first);
            ans.append(temp);
        }
        return ans;
    }
};