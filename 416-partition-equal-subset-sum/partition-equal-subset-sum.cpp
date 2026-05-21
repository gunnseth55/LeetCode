class Solution {
public:
   
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0)return false    ;
        int tot=sum/2;
        vector<bool>dp(tot+1,false);
        dp[0]=true;
        for(int num:nums){
            for(int j=tot;j>=num;j--){
                dp[j]=dp[j]||dp[j-num];
            }
        }
        return dp[tot];
    }
};