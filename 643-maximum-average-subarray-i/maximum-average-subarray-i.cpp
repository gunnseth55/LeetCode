class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double maxx=INT_MIN;
        double sum=accumulate(nums.begin(),nums.begin()+k,0);
        maxx=max(sum/k,maxx);
        for(int i=1;i<=nums.size()-k;i++){
            sum=sum-nums[i-1]+nums[i+k-1];
             maxx=max(sum/k,maxx);
        }
        return maxx;
    }
};