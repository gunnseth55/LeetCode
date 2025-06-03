/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
 # define maxpath 1000
 #define maxnodes 10000
 int **result;
 int *col;
 int path[maxpath];
 int pathindex;
 int resultindex;
void dfs(int **graph, int *graphColSize, int node, int size){
    if(resultindex>=maxnodes)return;
    path[pathindex++]=node;
    if(node==size){
        col[resultindex]=pathindex;
        result[resultindex]=(int*)malloc(sizeof(int)*pathindex);
        for(int i=0;i<pathindex;i++){
            result[resultindex][i]=path[i];
        }
        resultindex++;
    }else{
        for(int i=0;i<graphColSize[node];i++){
            dfs(graph,graphColSize,graph[node][i],size);
        }
    }
    pathindex--;
}
int** allPathsSourceTarget(int** graph, int graphSize, int* graphColSize, int* returnSize, int** returnColumnSizes) {
    result=(int**)malloc(maxnodes*sizeof(int*));
    col=(int*)malloc(maxnodes*sizeof(int));
    pathindex=0;
    resultindex=0;
    dfs(graph,graphColSize,0,graphSize-1);
    *returnSize=resultindex;
    *returnColumnSizes=col;
    return result;

}