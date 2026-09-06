class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxx=0;
        set<char>ss;
        int left=0;
        for(int right=0;right<s.length();right++){
            if(ss.find(s[right])==ss.end()){
                ss.insert(s[right]);
                int n=right-left+1;
                maxx=max(maxx,n);
            }else{
               while(ss.find(s[right])!=ss.end()){
                 ss.erase(s[left]);
                left++;
               }
                ss.insert(s[right]);
            }
        }



        return maxx;
    }
};