class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>result;
        set<int>s;
        int n=nums.size();
        for(int i:nums){
            if(s.find(i)!=s.end()){
                continue;
            }else{
                s.insert(i);
            }
        }
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()){
                result.push_back(i);
            }
        }
        return result;
    }
};