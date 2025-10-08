class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        for(int i:arr){
            m[i]++;
        }
        int x=-1;
        vector<pair<int,int>>v(m.begin(),m.end());
        sort(v.begin(),v.end(),[](const pair<int,int>&m1,const pair<int,int>&m2){
            return m1.second>m2.second;
        });
        for(auto &p:v){
            if(x==p.second){
                return false;
            }
            x=p.second;
        }
        return true;
    }
};