
class Solution {
public:
  
    bool startsWith(string word,string prefix) {
        int n=prefix.length();
        
        for(int i=0;i<n;i++){
            if(word[i]!=prefix[i]) return false;
        }
        return true;
    }
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
       
        sort(products.begin(),products.end());
        int n=searchWord.length();
        vector<vector<string>> result;
        int i=0;
        while(i<n){
           vector<string>temp;
           for(int j=0;j<products.size();j++){
             
             if(startsWith(products[j],searchWord.substr(0,i+1))){
                temp.push_back(products[j]);
                if(temp.size()==3)break;
            }
           
           }
            result.push_back(temp);
            i++;
        }
        return result;
    }
};