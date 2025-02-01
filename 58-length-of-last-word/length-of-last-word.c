int lengthOfLastWord(char* s) {
    int n=strlen(s);
    int count=0;
    int i=n-1;
  while(n>0 && s[i]==' '){
            n--;
            i--;
        }
    
    for(int j=n-1;j>=0;j--){
        if(s[j]!=' '){
            count++;
        }else
        break;
    }
    return count;
}