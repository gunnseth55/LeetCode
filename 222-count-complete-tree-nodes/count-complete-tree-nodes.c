/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 struct queue{
    struct TreeNode **arr;
    int front;
    int rear;
 };
 struct queue *init(){
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
     q->arr=(struct TreeNode **)malloc(20000*sizeof(struct TreeNode* ));
    q->front=-1;
    q->rear=-1;
    return q;
 }
 int isEmpty(struct queue *q){
    return q->front==-1;
 }
 int isFull(struct queue *q){
    return ((q->rear)+1)%20000 ==q->front;
 }

 struct TreeNode  *dequeue(struct queue *q){
   if (isEmpty(q)) {
        return NULL;
    }
    struct TreeNode *node = q->arr[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % 20000;
    }
    return node;
 }
 void enqueue(struct TreeNode  *x,struct queue *q){
    if(isFull(q)){
        return;
    }
    if(q->front==-1){
        q->front++;
    }
    q->rear=(q->rear+1)%20000;
    q->arr[q->rear]=x;
 }
 
int countNodes(struct TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    int count=0;
    struct queue *q=init();
    enqueue(root,q);
    while(!isEmpty(q)){
        struct TreeNode *temp=dequeue(q);
      count++;
        if(temp->left) 
        enqueue(temp->left,q);
        if(temp->right)
        enqueue(temp->right,q);
    }
    free(q->arr);
    free(q);
    return count;
}