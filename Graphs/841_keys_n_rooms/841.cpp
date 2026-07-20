#include<vector>
#include <queue>
using namespace std;
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n= rooms.size();
        vector<int> adj[n+1];

        queue<int>q;
        vector<int> vis(n,0);

        q.push(0);
        vis[0]=1;

        while(!q.empty()) {
            int node=q.front();
            q.pop();
            
            for(auto it : rooms[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }

        if (find(vis.begin(),vis.end(),0)==vis.end()) return true;
        else return false;
    }
};