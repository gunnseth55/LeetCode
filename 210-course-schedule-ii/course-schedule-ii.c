/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 struct node{
    int value;
    struct node *next;
 };
  void addedge(struct node **graph, int start, int end){
    struct node *newn=(struct node*)malloc(sizeof(struct node));
    newn->value=end;
    newn->next=graph[start];
    graph[start]=newn;
  }
int* findOrder(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize, int* returnSize) {
    struct node ** graph=(struct node**)calloc(numCourses, sizeof(struct node*));

int *indegree=(int*)calloc(numCourses, sizeof(int));

    
    
      for(int i=0;i<prerequisitesSize;i++){
        int start=prerequisites[i][1];
        int end=prerequisites[i][0];
        addedge(graph,start,end);
        indegree[end]++;
      }
       
     int *stack=(int*)calloc(numCourses, sizeof(int));
     int rear=0,front=0;
     for(int i=0;i<numCourses;i++){
        if(indegree[i]==0){
            stack[rear++]=i;
        }
     }
      int *result=(int*)calloc(numCourses, sizeof(int));
      int index=0;

      while(front<rear){
        int x=stack[front++];
        result[index++]=x;

        struct node *adj=graph[x];
        while(adj){
            indegree[adj->value]--;
            if(indegree[adj->value]==0){
                stack[rear++]=adj->value;
                
            }
            adj=adj->next;
        }
      }
        *returnSize= (index==numCourses)? numCourses:0;

        if(index!=numCourses){
            free(result);
            result=NULL;
        }
for(int i=0;i<numCourses;i++){
    struct node *curr=graph[i];
    while(curr){
        struct node *temp=curr;
        curr=curr->next;
        free(temp);
    }
}

        free(graph);
        free(stack);
        free(indegree);
      return result;
}
