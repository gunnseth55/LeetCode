class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>vec;
        while(ss>>word){
            vec.push_back(word);
        }
        reverse(vec.begin(),vec.end());
        string result;
        for(int i=0;i<vec.size();i++){
            result+=vec[i];
            if(i<vec.size()-1){
                result+=" ";
            }
        }
        return result;
    }
};