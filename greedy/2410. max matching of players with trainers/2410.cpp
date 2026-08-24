#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());

        int p=0, t=0;
        int cnt=0;

        while(p<players.size()){
            while(t<trainers.size()){
                if (players[p]<=trainers[t]){
                    cnt++;
                    if(p!=players.size()-1) p++;
                    else break;
                    //t++;
                    
                }
                t++;
            }
            p++;
        }

        return cnt;
    }
};