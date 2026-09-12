class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses,0);
        vector<vector<int>> adj(numCourses);

        for(auto pre: prerequisites){
            indegree[pre[1]]++;
            adj[pre[0]].push_back(pre[1]);
        }

        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0) q.push(i);
        }

        int count=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            count++;

            for(auto neigh:adj[node]){
                indegree[neigh]--;
                if(indegree[neigh]==0){
                    q.push(neigh);
                } 
            }
        }

        return count==numCourses;
    }
};
