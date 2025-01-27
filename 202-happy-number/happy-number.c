bool isHappy(int n) {
    int sum=0;
    int count=0;
   while(count<10){
    sum=0;
        while(n!=0){
            int x=n%10;
            sum+= (x*x);
            n=n/10;
        }
        if(sum==1){
            return true;
        }
        n=sum;
        count++;
    }
        return false;
    
}