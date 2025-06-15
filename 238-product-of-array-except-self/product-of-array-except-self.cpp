class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int x=1;
        int n=nums.size();
        vector <int> res(n,1);
       for(int i=0;i<nums.size();i++){
        res[i]=x;
        x*=nums[i];
       }
       int y=1;
       for(int j=nums.size()-1;j>=0;j--){
        res[j]*=y;
        y*=nums[j];
       }
        return res;
    }
};