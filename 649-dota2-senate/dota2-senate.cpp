class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>r,d;
        int num=0;
        for(char c:senate){
            if(c=='R')r.push(num++);
            if(c=='D')d.push(num++);

        }
        while(!r.empty() && !d.empty()){
            if(r.front()<d.front()){
                
                r.push(num++);
            }else{
               
                d.push(num++);
            }
            r.pop();
            d.pop();
        }
        return r.empty()?"Dire":"Radiant";
    }
};