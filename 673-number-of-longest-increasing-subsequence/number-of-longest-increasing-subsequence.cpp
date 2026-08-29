class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> len(n,1);
        vector<int> count(n,1);
        for(int i=n-1;i>=0;i--){
            for(int j=i+1;j<n;j++){
               if(nums[j]>nums[i]){
                 if(len[j]+1>len[i]){
                    len[i]=len[j]+1;
                    count[i]=count[j];
                }else if ( len[i]==len[j]+1){
                    count[i]+=count[j];
                }
               }
            }
        }
        int maxx=0;
        int ans=0;
        for(int i=0;i<n;i++){
            maxx=max(maxx,len[i]);
        }
        for(int i=0;i<n;i++){
            if(len[i]==maxx){
                ans+=count[i];
            }
        }
        return ans;
    }
};