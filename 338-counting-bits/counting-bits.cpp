class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>result;
        for(int i=0;i<=n;i++){
            int sum=0,num=i;
            while(num!=0){
                sum+=num%2;
                num/=2;
            }
            result.push_back(sum);
        }
        return result;
    }
};