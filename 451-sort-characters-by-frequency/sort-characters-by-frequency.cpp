class Solution {
public:
    string frequencySort(string s) {
        string result;
        map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        vector<pair<char,int>>temp(m.begin(),m.end());

       sort(temp.begin(),temp.end(),[](const pair<char,int>p1, const pair<char,int>p2){
        return p1.second>p2.second;
       });

       for(auto &p:temp){
        string xx(p.second,p.first);
        result+=xx;
       }

        return result;

    }
};