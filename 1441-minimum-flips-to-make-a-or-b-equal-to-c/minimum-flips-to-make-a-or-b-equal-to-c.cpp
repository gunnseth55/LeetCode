class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        int count=0;
        string aa=bitset<32>(a).to_string();
        string bb=bitset<32>(b).to_string();
        string cc=bitset<32>(c).to_string();
       
        for(int i=0;i<32;i++){
            bool abit=aa[i]=='1';
            bool bbit=bb[i]=='1';
            bool cbit=cc[i]=='1';
            if((abit||bbit)!=cbit){
                if(cbit){
                    count++;
                }else{
                    count+=abit+bbit;
                }
            }
        }
        return count;
    }
};