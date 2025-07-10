class Solution {
public:
    bool isUnique(string &s){

        set<char>st;
        for(char c:s){
            if(st.count(c))return false;
            st.insert(c);
        }
        return true;
    }

    void backtrack(vector<string>&arr, int index, string curr, int &maximum){

        if(!isUnique(curr))return ;
        maximum=max(maximum, int(curr.length()));
        for(int i=index;i<arr.size();i++){
            backtrack(arr, i+1,curr+arr[i],maximum);
        }

    }
    int maxLength(vector<string>& arr) {
        int maximum=0;
        backtrack(arr, 0, "", maximum);
        return maximum;
    }
};