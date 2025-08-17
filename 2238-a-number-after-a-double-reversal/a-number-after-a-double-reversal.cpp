class Solution {
public:
int rev(int n){
    int x=0;
    while(n!=0){
        x=(x*10)+(n%10);
        n/=10;
    }
    return x;
}
    bool isSameAfterReversals(int num) {
        int x=num;
        if(num%10==0){
        while(x%10!=0){
           x=x/10;
        }
        }
        int reverse1=rev(x);
        int reverse2=rev(reverse1);
        return reverse2==num;
    }
};