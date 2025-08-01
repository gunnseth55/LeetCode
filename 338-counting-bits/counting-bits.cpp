class Solution {
public:
int countt(int num, vector<int> &result){

int count=0;
while(num!=0){
    int x=num%2;
    if(x==1)count++;
    num/=2;
}
return count;
}
    vector<int> countBits(int n) {
        vector<int> ans(n+1,-1);
        vector<int>result;
        ans[0]=0;
        result.push_back(0);
        for(int i=1;i<=n;i++){

           int a=i-1;
            int b=1;
            while(b!=0){
                int carry=a&b;
                a=a^b;
                b=carry<<1;
            }
            
            int x=countt(a,result);
            result.push_back(x);
        }
       return result;
    }
};