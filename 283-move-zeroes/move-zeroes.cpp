class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp;
        int count=0;
        for(int i:nums){
            if(i!=0){
                temp.push_back(i);
            }else{
                count++;
            }
        }
        temp.insert(temp.end(),count,0);
        nums=temp;
    }
};