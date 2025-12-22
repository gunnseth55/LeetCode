class RecentCounter {
    queue<int>q;
public:
    int count;
    RecentCounter() {
        count=0;
    }
    
    int ping(int t) {
        q.push(t);
        while(!q.empty() && q.front()<t-3000)q.pop();
        return static_cast<int>(q.size());
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */