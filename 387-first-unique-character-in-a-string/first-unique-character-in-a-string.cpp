class Solution {
public:
    int firstUniqChar(string s) {
        queue<int> q;
        unordered_map<char,int>m;

        int n=s.size();
        for(int i=0;i<n;i++){
            if(m.find(s[i])==m.end()){
                q.push(i);
            }
            m[s[i]]++;

            while(q.size()>0 && m[s[q.front()]]>1){
                q.pop();
            }

        }

if(q.empty()){
    return -1;
}
return q.front();
    }
};