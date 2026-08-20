//with map unnecessary
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        multimap<double,double,greater<double>> pbyw;
        int op=0;

        for(int i=0;i<boxTypes.size();i++){
            pbyw.insert({boxTypes[i][1],i});
        }

        for(auto it=pbyw.begin();it!=pbyw.end();++it){
            int id=it->second;
            if (truckSize>boxTypes[id][0]) {
                truckSize-=boxTypes[id][0];
            }
            else {
                boxTypes[id][0]=truckSize;
                truckSize=0;
            }

            op+=boxTypes[id][1]*boxTypes[id][0];
            if (!truckSize) break;
        }

        return op;  
    }
};

//simpler solution
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans=0;
        sort(boxTypes.begin(),boxTypes.end(),
            [](const vector<int>& a, const vector<int>& b){
                return a[1]>b[1];
            });
        
        for(int i=0;i<boxTypes.size();i++){
            int take = min(boxTypes[i][0], truckSize);
            truckSize-=take;
            ans+=boxTypes[i][1]*take;
            if (truckSize==0) break;
        }
        
        return ans;
    }
};
