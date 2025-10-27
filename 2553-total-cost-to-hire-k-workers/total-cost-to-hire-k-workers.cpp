class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>>pq1;
        priority_queue<int,vector<int>,greater<int>>pq2;
        int l=0,r=costs.size()-1;
        int curr=0;
        long long ans=0;
        while(curr<k){
            while(pq1.size()<candidates && l<=r){
                pq1.push(costs[l++]);
            }
            while(pq2.size()<candidates && l<=r){
                pq2.push(costs[r--]);
            }

            int top1=pq1.empty()?INT_MAX:pq1.top();
            int top2=pq2.empty()?INT_MAX:pq2.top();
            if(top1<=top2){
                ans+=top1;
                pq1.pop();
            }else{
                ans+=top2;
                pq2.pop();
            }
            curr++;
        }
        return ans;
    }
};