int findJudge(int n, int** trust, int trustSize, int* trustColSize) {
    int indeg[n+1];
    int outdeg[n+1];
        for(int i=0;i<=n;i++){
            indeg[i]=0;
            outdeg[i]=0;
        }
     for(int i=0;i<trustSize;i++){
         int person=trust[i][0];
         int trustee=trust[i][1];
         outdeg[person]++;
         indeg[trustee]++;
     }
     for(int i=1;i<=n;i++){
        if(indeg[i]==n-1 && outdeg[i]==0){
            return i;
        }
     }
     return -1;
}