class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      int low=1;
      int high=*max_element(piles.begin(),piles.end());
     
      while(low<high){
        int mid=low+(high-low)/2;
         int count=0;
        for(int i:piles){
            count+=(i/mid);
            if(i%mid!=0)count++;
        }
        if(count<=h){
            high=mid;
        }else{
            low=mid+1;
        }
      }
      return low;
    }
};