class Solution {
public:
    int maxDepth(string s) {
        int curr=0;
        int max_depth=0;
        for(char c:s){
            if(c=='('){
                curr++;
                max_depth=max(max_depth,curr);
            }else if(c==')'){
                curr--;
            }
        }
        return max_depth;
    }
};