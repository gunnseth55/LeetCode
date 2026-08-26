class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxx=1;
        int n=nums.size();
        for( int i=1;i<n;i++){
            int curr=i;
            int count=1;
            while(curr<n && nums[curr]>nums[curr-1] ){
                count=count+1;
                curr++;
            }
            maxx=max(maxx,count);
        }
        return maxx;
    }
};