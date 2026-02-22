class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>temp;
        for(int i=0;i<nums.size();i++){
            temp.insert(nums[i]);
        }
        if(temp.size()<3){
           auto  it=temp.rbegin();
           return *it;
        }
        auto it=temp.rbegin();
        advance(it,2);
        return *it;
    }
};