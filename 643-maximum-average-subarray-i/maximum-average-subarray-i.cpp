class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double maxx=INT_MIN;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        maxx=max(sum/k,maxx);
        for(int i=1;i<=nums.size()-k;i++){
            sum=sum-nums[i-1]+nums[i+k-1];
             maxx=max(sum/k,maxx);
        }
        return maxx;
    }
};