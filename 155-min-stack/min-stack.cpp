class MinStack {
public:
  vector <int> arr; 
 
    MinStack() {
       
    }
     void push(int val) {
       arr.push_back(val);
    }

    
    void pop() {
        if(arr.empty()) return ;
        else
        arr.pop_back();
    }
    
    int top() {
        if(arr.empty())return -1;
        return arr.back();
    }
    
    int getMin() {
        if(arr.empty())return -1;
     
       int min=INT_MAX;
        for(int i:arr){
                if(i<min){
                    min=i;
                }
        }

        return min;
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