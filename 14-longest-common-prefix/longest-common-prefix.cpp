class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        bool flag=false;
        int index=0;
        while(!flag && index<strs[0].length()){
            char c=strs[0][index];
            for(auto &b:strs){
                if(b[index]!=c){
                    flag=true;
                } 
            }
            if(flag){
                return ans;
            }
            ans.push_back(c);
            index++;
        }
        return ans;
    }
};