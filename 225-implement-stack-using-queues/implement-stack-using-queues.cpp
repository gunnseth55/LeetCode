class MyStack {
    queue<int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int size=q.size();
        for(int i=0;i<size-1;++i){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        if(!q.empty()){
            int x=q.front();
           q.pop();
            return x;
        }return -1;
    }
    
    int top() {
        if(!q.empty()){
            return q.front();
        }return -1;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */