#define unvisited 0
#define visiting 1
#define visited 2
struct node{
    int value;
    struct node *next;
};
 void addedge(struct node **graph,int from , int to){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->value=to;
    newnode->next=graph[from];
    graph[from]=newnode;
 }
 bool hascycle(struct node **graph, int course, int *state){
    if(state[course]==visiting){
        return true;
    }
    if(state[course]==visited){
        return false;
    }
    state[course]=visiting;
   struct node *x=graph[course];
   while(x){
    
        if(hascycle(graph,x->value,state))
            return true;
        x=x->next;
    }
    state[course]=visited;
    return false;
    }

bool canFinish(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize) {
 int *state=(int*)calloc(numCourses,sizeof(int));
  struct node **graph=(struct node**)calloc(numCourses,sizeof(struct node*));


for( int i=0;i<prerequisitesSize;i++){
    int to=prerequisites[i][1];
    int from=prerequisites[i][0];
    addedge(graph,to,from);
}
 for(int i=0;i<numCourses;i++){
    if(hascycle(graph,i,state)){
        return false;
    }
 }
 return true;
}