class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int num=asteroids.size(),i=0;
        vector<int>result;
        if(num==0)return result;
        stack<int>stk;
        stk.push(asteroids[i++]);
        while(i<num){
            
            if(stk.empty()){
                stk.push(asteroids[i++]);
                continue;
            }
            int curr=stk.top();
            if(curr>0 && asteroids[i]<0){
                if(abs(curr)==abs(asteroids[i])){
                    stk.pop();
                    i++;
                }else if(abs(curr)<abs(asteroids[i])){
                      stk.pop();
                      continue;
                }else{
                    i++;
                }    
            }else{
                    stk.push(asteroids[i++]);
                }
            }
        while(!stk.empty()){
            result.push_back(stk.top());
            stk.pop();
        }
        reverse(result.begin(),result.end());
    return result;
    }
};