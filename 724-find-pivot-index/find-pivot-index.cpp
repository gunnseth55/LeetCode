class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       
        int n=nums.size();
        vector<pair<int,int>>vec(n,{-1,-1});
        int sum=0;
        for(int i=0;i<n;i++){
           
            vec[i].first=sum;
            sum+=nums[i];
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
           
            vec[i].second=sum;
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
           
            if(vec[i].first==vec[i].second){
                return i;
            }
        }

        return -1;
    }
};