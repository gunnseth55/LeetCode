


typedef struct {
    int *arr;
    int front;
    int rear;
    int size;
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue *circular=(MyCircularQueue*)malloc(sizeof(MyCircularQueue));
     circular->arr=(int*)malloc(k*sizeof(int));
     circular->front=-1;
     circular->rear=-1;
     circular->size=k;
    return circular;
}
bool myCircularQueueIsFull(MyCircularQueue* obj) {
    return ((obj->rear+1)%obj->size)==obj->front;
}
bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
   return obj->front==-1;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if(myCircularQueueIsFull(obj)){
        return false;
    }
    if(myCircularQueueIsEmpty(obj)){
        obj->front=obj->rear=0;
    }
    else{
    obj->rear=(obj->rear+1)%obj->size;
    }
    obj->arr[obj->rear]=value;
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if(myCircularQueueIsEmpty(obj)){
        return false;
    }
    if(obj->front==obj->rear){
        obj->rear=obj->front=-1;
    }
    else{
        obj->front=(obj->front+1)%obj->size;
    }
    
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if(myCircularQueueIsEmpty(obj)){
        return -1;
    }
    return obj->arr[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if(myCircularQueueIsEmpty(obj)){
        return -1;
    }
    return obj->arr[obj->rear];
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free (obj->arr);
    free (obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 
 * bool param_2 = myCircularQueueDeQueue(obj);
 
 * int param_3 = myCircularQueueFront(obj);
 
 * int param_4 = myCircularQueueRear(obj);
 
 * bool param_5 = myCircularQueueIsEmpty(obj);
 
 * bool param_6 = myCircularQueueIsFull(obj);
 
 * myCircularQueueFree(obj);
*/