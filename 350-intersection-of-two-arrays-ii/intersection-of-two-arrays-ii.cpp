class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        vector<int>temp=nums2;
        for(int i=0;i<nums1.size();i++){
          
             auto it=find(temp.begin(),temp.end(),nums1[i]);
            if(it !=temp.end() ){
                result.push_back(nums1[i]);
                temp[it-temp.begin()]=-1;
            }
          
        }
        return result;
    }
};
  