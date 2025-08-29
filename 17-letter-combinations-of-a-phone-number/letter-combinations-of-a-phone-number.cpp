class Solution {
public:
void solve(vector<string>&result,string &temp,map<int,vector<char>>&m, string & digits,int index){

if(temp.size()==digits.length()){
    result.push_back(temp);
    return;
}
int x=digits[index]-'0';
vector<char> jmd= m[x];
for(int i=0;i<jmd.size();i++){
    temp.push_back(jmd[i]);
    solve(result,temp,m,digits,index+1);
    temp.pop_back();
}

}
    vector<string> letterCombinations(string digits) {
        int n=digits.length();
         map<int,vector<char>>m;
         m[2]={'a','b','c'};
         m[3]={'d','e','f'};
         m[4]={'g','h','i'};
         m[5]={'j','k','l'};
         m[6]={'m','n','o'};
         m[7]={'p','q','r','s'};
         m[8]={'t','u','v'};
         m[9]={'w','x','y','z'};
        vector<string>result;
        if(n==0)return result;
        string temp;
       
        solve(result,temp,m,digits,0);
        return result;
    }
    
};