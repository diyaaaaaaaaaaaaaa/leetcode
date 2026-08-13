
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int cnt=0;
        vector<int> adj[n+1];

        for(int i=0; i< n; i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        queue<int> q;
        //q.push(0);

        vector<int> vis(n+1);
       // vis[0]=1;


       for(int x=0;x<n;x++){
            if(!vis[x]){
                cnt++;
                q.push(x);
                vis[x]=1;

                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    for(auto it : adj[node]){
                        if(!vis[it]){
                            q.push(it);
                            vis[it]=1;
                        }
                    }
                }
            }
        }
        return cnt;
    }
};