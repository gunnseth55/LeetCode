class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        for(int i=0;i<nums1.size();i++){
           auto tt=find(result.begin(),result.end(),nums1[i]);
           if(tt==result.end() || result.empty()){
             auto it=find(nums2.begin(),nums2.end(),nums1[i]);
            if(it !=nums2.end()){
                result.push_back(nums1[i]);
            }
           }
        }
        return result;
    }
};