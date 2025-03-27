int numberOfSteps(int num) {
    if(num==0){
        return 0;
    }
     int x=num;
     int count=0;
     while(x!=0){
        if(x%2!=0){
            x=x-1;
            count++;
        }else{
        x=x/2;
        count++;
        }
       
     }
return count;
}