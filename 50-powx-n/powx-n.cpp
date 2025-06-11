class Solution {
public:
    double myPow(double x, int n) {
        if(n<0){
            return 1/pow(x,abs((double)n));
        }else
        return pow(x,(int)n);
    }
};