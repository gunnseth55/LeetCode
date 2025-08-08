class Solution {
public:
int binary(int n,int base){
    long ans=0;

    while(n!=0){
        ans=(ans*10)+(n%base);
        n=n/base;
    }
    return ans;
}
bool palindrome(int x){
    long n=x;
    long ans=0;
    while(n!=0){
        ans=(ans*10)+(n%10);
        n=n/10;
    }
    return x==n;
}
    bool isStrictlyPalindromic(int n) {
        bool flag=true;
        for(int i=2;i<=n-2;i++){
          int x=  binary(n,i);
          if(!palindrome(x)){
            flag=false;
          }
        }
        return flag;
    }
};