class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            int num;
            int maxx=-1;
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    num=j;
                }
            }
            for(int k=num+1;k<m;k++){
               if(maxx<nums2[k] && nums2[k]>nums1[i]){
                maxx=nums2[k];
                break;
               }
            }
            result.push_back(maxx);
        }
        return result;
    }
};