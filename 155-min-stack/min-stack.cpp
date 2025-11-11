class MinStack {
public:
stack<int>stk;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
       int minn=INT_MAX;
       stack<int>temp=stk;
       while(!temp.empty()){
        int x=temp.top();
        minn=min(minn,x);
        temp.pop();
       }
       return minn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */