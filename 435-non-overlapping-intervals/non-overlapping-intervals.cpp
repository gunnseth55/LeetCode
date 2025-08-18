class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count=0;
        sort(intervals.begin(),intervals.end(),[](auto &a, auto &b){
            return a[1]<b[1];
        });
       
        int x=intervals[0][1];
        
       for(int i=1;i<intervals.size();i++){
            if( x>intervals[i][0]){
                count++;
                
            }
            else{
               
           x=intervals[i][1];
            }
        }
        return count;
    }
};