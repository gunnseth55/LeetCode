class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m=potions.size();
        vector<int>result(n,0);

        sort(potions.begin(),potions.end());
        for(int i=0;i<n;i++){
            bool flag=false;
            int start=0,end=m-1;
        while(start<=end ){
            int mid=start+(end-start)/2;
            long long prod=(long long)spells[i]*(long long)potions[mid];
            if(prod<success){
                start=mid+1;
            }else if(prod>=success){
                end=mid-1;
            }
           
        }
         result[i]=m-start;
        }
        return result;
    }
};