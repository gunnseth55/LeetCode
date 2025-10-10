class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>result;
        vector<int>temp=candies;
        sort(temp.begin(),temp.end());
        int maxx=temp[n-1];
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=maxx){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
        return result;
    }
};