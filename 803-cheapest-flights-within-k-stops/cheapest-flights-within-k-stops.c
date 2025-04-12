int findCheapestPrice(int n, int** flights, int flightsSize, int* flightsColSize, int src, int dst, int k) {
    int *cost=(int*)malloc(n*sizeof(int));
     for(int i=0;i<n;i++){
        cost[i]=INT_MAX;
     }
     cost[src]=0;
     for(int i=0;i<=k;i++){
        int *temp=(int *)malloc(n*sizeof(int));
        
        for(int j=0;j<n;j++)temp[j]=cost[j];
        for(int j=0;j<flightsSize;j++){
            int start=flights[j][0];
            int end=flights[j][1];
            int val=flights[j][2];
            if(cost[start]!=INT_MAX && cost[start]+val< temp[end]){
                temp[end]=cost[start]+val;
            }
        }
        free(cost);
    cost=temp;
     }
     int res=cost[dst];
     free(cost);
     return res==INT_MAX? -1:res;
}