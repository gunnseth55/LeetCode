class Solution {
public:
    bool isHappy(int n) {
        if(n==1||n==7){
            return true;
        }else if(n<10)return false;
        int sum=0;

        while(n!=0){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        
        return isHappy(sum);

    }
};