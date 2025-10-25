class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count=0;
        int left=0;
        int maxx=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0){
                count++;
            }
            while(count>1){
                if(nums[left]==0){
                    count--;
                }
                left++;
            }
            maxx=max(maxx,i-left);
        }
        return maxx;
    }
};