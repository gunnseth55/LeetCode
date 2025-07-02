class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
          if (i>0 && nums[i]==nums[i-1])continue;

            for(int j=i+1;j<n;){
                 
                int k=j+1;
                int l=n-1;
                while(k<l){
                   long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                         while(k<l &&  nums[k]==nums[k-1])k++;
                    }else if(sum>target){
                        l--;
                    }else if(sum<target){
                        k++;
                    }
                }
                j++;
                while (j+1<n && nums[j]==nums[j-1])j++;
            }
        }


return ans;

    }
};