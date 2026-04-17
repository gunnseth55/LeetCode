class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n=temperatures.size();
        vector<int>result(n,0);
        stack<int>temp;
       
        for(int i=n-1;i>=0;i--){
           
                while(!temp.empty() && temperatures[temp.top()]<=temperatures[i]){
                    
                    temp.pop();
                }
                if(!temp.empty()){
                    result[i]=temp.top()-i;
                }
               
            temp.push(i);
        }
      
        return result;
    }
};