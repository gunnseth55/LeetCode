class Solution {
public:
    int beautySum(string s) {
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;++i){
            int freq[26]={0};
            for(int j=i;j<n;++j){
                freq[s[j]-'a']++;
            
            int maxx=0,minn=INT_MAX;
            for(int z:freq){
                if(z>0){
                    maxx=max(maxx,z);
                    minn=min(minn,z);
                }
            }
            sum+=(maxx-minn);
        }
        }
        return sum;
    }
};