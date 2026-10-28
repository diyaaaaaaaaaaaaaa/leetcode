#include <unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int sum=0;  
        unordered_map<int,int> pref;
        pref[0]=-1; //pref[sum]=id
        for(int i=0;i<n;i++){
            sum+=(nums[i]==0 ? -1:1);
            if(!pref.count(sum)) pref[sum]=i;  //storing only first occurence
            else ans=max(ans, i-pref[sum]);
        }
        return ans;
    }
};