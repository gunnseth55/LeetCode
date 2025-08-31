class Solution {
public:
bool isPalindrome(string s){
    string x=s;
    reverse(s.begin(),s.end());
    return (x==s);
}
 vector<vector<string>> solve(  string &s){
if(s.empty())return{{}};

vector<vector<string>>result;

for(int i=1;i<=s.size();i++){
    string sub1=s.substr(0,i);
    string sub2=s.substr(i);

if(isPalindrome(sub1)){
    vector<vector<string>>sub=solve(sub2);
    for(auto &p:sub){
        vector<string>temp;
        temp.push_back(sub1);
        temp.insert(temp.end(),p.begin(),p.end());
        result.push_back(temp);
    }

}
 }
 return result;
 }



    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        if(s.empty())return result;
      if(s.length()==1)return {{s}};
       result= solve(s);
        return result;
    }
};