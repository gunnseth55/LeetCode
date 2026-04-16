class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>result;
        int n=s.length();
        int left=0;
        int maxx=0;
        for(int i=0;i<n;i++){
            if(result.count(s[i])==0){
                result.insert(s[i]);
                maxx=max(maxx,i-left+1);
            }else{
                while(result.count(s[i])){
                    result.erase(s[left]);
                        left++;
                }
                result.insert(s[i]);
            }
        }
        return maxx;
    }
};