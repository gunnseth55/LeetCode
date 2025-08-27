class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
     sort(nums.begin(),nums.end());
       vector<vector<int>> result={{}};
       int prev=0;

        for(int num=0;num<nums.size();num++){
            int n=result.size();
            int start=0;
            if(num>0 && nums[num]==nums[num-1]){
            start=prev;
            }else{
                start=0;;
            }
            prev=n;
           for(int j=start;j<n;++j){
                vector<int> temp=result[j];
                temp.push_back(nums[num]);
                result.push_back(temp);
            }
        }
        return result;
    }
};