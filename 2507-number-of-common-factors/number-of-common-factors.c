int commonFactors(int a, int b) {
   int count=0;
   int small=a<b?a:b;
   for(int i=1;i<=small;i++){
    if(a%i==0 && b%i==0){
        count++;
    }
   }
   return count;
}