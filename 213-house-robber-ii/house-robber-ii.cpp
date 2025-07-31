class Solution {
public:

int solve(vector<int>&nums,int start, int end){

    int prev1=0,prev2=0;
    for(int i=start;i<end;i++){
        
                int curr=max(prev1,nums[i]+prev2);
                prev2=prev1;
                prev1=curr;
           
    }
    return prev1;
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
       int rob1=solve(nums,0,n-1);
       int rob2=solve(nums,1,n);
       return max(rob1,rob2);
    }
};