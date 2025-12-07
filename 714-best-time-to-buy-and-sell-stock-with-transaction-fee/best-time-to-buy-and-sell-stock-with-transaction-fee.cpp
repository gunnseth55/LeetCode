class Solution {
public:

    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
      int have=-prices[0];
      int nothave=0;
      for(int i=1;i<n;i++){
        have=max(have, nothave-prices[i]);
        nothave=max(nothave,have+prices[i]-fee);
      }
    return nothave;
    }
};