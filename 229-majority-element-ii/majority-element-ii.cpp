class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        vector<int>res;
        map<int,int>m;
        for(int i:arr){
            m[i]++;
        }
        vector<pair<int,int>>p(m.begin(),m.end());
        sort(p.begin(),p.end(),[](const pair<int,int> &p1, const pair<int,int> &p2){
            return p1.second>p2.second;
        });
       
        // int x=p[0].first;
        // res.push_back(x);
        // int maxx=p[0].second;
        
        // for(int i=1;i<p.size();i++){
        //     if(p[i].second==maxx)res.push_back(p[i].first);
        // }
        int x=arr.size()/3;
        for(auto &pp:p){
            if(pp.second>x)res.push_back(pp.first);
        }
        
        return res;
    }
};