class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx=0;
        int i=0;
        int count=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]==1){
            while(i<n &&nums[i]==1 ){
                count++;
                i++;
            }
            maxx=max(maxx,count);
            }
            else{
                count=0;
                i++;
            }
           
        }
        return maxx;
    }
};