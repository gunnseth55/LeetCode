class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>result;
        set<int>s1;
        for(int i:nums1){
            s1.insert(i);
        }
        set<int>s2;
        for(int i:nums2){
            s2.insert(i);
        }
        vector<int>temp;
        for(int i:s1){
            if(s2.find(i)==s2.end()){
                temp.push_back(i);
            }
        }
        result.push_back(temp);
        temp.clear();
        for(int i:s2){
            if(s1.find(i)==s1.end()){
                temp.push_back(i);
            }
        }
        result.push_back(temp);
        return result;
    }
};