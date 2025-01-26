
#include<limits.h>
int reverse(int x){
    int sign=(x<0)?-1:1;
    unsigned int y = (x == INT_MIN) ? (unsigned int)INT_MAX + 1 : (unsigned int)(x * sign);
    int sum=0;
while(y!=0){
    if(sum>(INT_MAX-(y%10))/10){
        return 0;
    }
sum=(sum*10)+(y%10);
y=y/10;
}
return sum*sign;
}