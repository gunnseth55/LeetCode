class Solution {
public:
    bool solve(vector<vector<int>>&graph, int course, vector<int>&arr){
        if(arr[course]==1){
            return true;
        }
        if(arr[course]==2){
            return false;
        }
        arr[course]=1;
        for(int next:graph[course]){
            if(solve(graph,next,arr))return true;
        }
        arr[course]=2;
        return false;
    }
    void addedge(vector<vector<int>>&graph, int u, int v){
        graph[u].push_back(v);
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(numCourses);
        for(int i=0;i<prerequisites.size();i++){
           
                addedge(graph,prerequisites[i][0],prerequisites[i][1]);
            
        }
        vector<int>arr(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(solve(graph,i, arr))return false;
        }
        return true;
    }
};