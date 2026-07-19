#include<vector>
#include <queue>
using namespace std;
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        if (source==destination) return true;
        
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[v].push_back(u);
            adj[u].push_back(v);
        }

        queue<int>q;
        vector<int> visited(n,0);

        //starting node
        visited[source]=1;
        q.push(source);

        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it : adj[node]) {
                if(!visited[it]){
                    visited[it]=1;
                    q.push(it);
                }
            }
            if(q.front()==destination) return true;
        }
        return false;
    }
};