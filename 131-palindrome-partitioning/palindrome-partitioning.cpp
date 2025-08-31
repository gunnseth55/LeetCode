class Solution {
public:
bool isPalindrome(string s){
    string x=s;
    reverse(s.begin(),s.end());
    return (x==s);
}

void solve(string s,vector<vector<string>>&result,vector<string> &temp){
if(s.size()==0)result.push_back(temp);
for(int i=0;i<s.size();i++){
    string sub1=s.substr(0,i+1);
    if(isPalindrome(sub1)){
        temp.push_back(sub1);
        solve(s.substr(i+1),result,temp);
        temp.pop_back();
    }
}


}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        vector<string>temp;
        solve(s,result,temp);
        return result;
    }
};