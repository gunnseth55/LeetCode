class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=0;
        int buy=prices[0];
       
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }else if(prices[i]-buy>diff){
                diff=prices[i]-buy;
            }
        }
        return diff;
    }
};