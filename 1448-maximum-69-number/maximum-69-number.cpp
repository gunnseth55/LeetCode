class Solution {
public:
    int maximum69Number (int num) {
        int n;
        deque<int>arr;
        while(num!=0){
            int rem=num%10;
            arr.push_front(rem);
            num/=10;
        }
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==6){
                arr[i]=9;
                break;
            }
        }
        int res=0;
        for(int i:arr){
            res=(res*10)+i;
        }
return res;
    }
};