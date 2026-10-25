#include<vector>
using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0, run=0;

        for(int i:nums){
            if(i>=minK && i<=maxK) run++;
            else {
                ans+=run*(run+1)/2;
                run=0;
            }
        }
        ans+=run*(run+1)/2;

        return ans;
    }
};