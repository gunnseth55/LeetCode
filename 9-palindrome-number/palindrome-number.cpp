class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long n=x;
        long y=0;
        while(n!=0){
            int rem=n%10;
            y=(y*10)+rem;
            n/=10;
        }
        return (y==x);
    }
};