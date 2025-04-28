int countDigits(int num) {
    int n=num;
   int res=0;
   while(n>0){
   int x=n%10;
    if(x!=0 && num%x==0){
        res++;
    }
    n/=10;
   }
return res;
}