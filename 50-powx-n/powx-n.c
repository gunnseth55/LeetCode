double myPow(double x, int n) {
    if(n==0){
        return 1;
    }
   double res=1.0;
    long long  N=n;
   if(n<0){
 N=-N;
     while(N!=0){
        
            if(N%2==1){
                res=res*x;
            }
       
        x=x*x;
        N=N/2;
    }
    return 1/res;
   }

    else{
        while(N!=0){
            if(N%2==1){
                res=res*x;
            }
       
        x=x*x;
        N=N/2;
    }
    return res;
    }
}