class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int>grp;
        int c=1;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1])c++;
            else{
                grp.push_back(c);
                c=1;
            }
        }
        grp.push_back(c);
        int ans=0;
        for(int i=0;i<grp.size()-1;i++){
            ans+=min(grp[i],grp[i+1]);
        }
        return ans;
    }
};