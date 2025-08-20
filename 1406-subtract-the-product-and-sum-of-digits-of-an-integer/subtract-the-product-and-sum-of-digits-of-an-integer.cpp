class Solution {
public:
int product(int a){
    int x=1;
    while(a!=0){
      int p=a%10;
      x=x*p;
      a/=10;

    }
    return x;
}
int add(int a){
    int res=0;
    while(a!=0){
        res+=(a%10);
        a/=10;
    }
    return res;
}
    int subtractProductAndSum(int n) {
        int pro=product(n);
        int sum=add(n);
        return pro-sum;
    }
};