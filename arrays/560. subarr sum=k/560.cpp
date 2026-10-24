#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //storing prefix sums with the iodea that if prefsum-k exists, k would also exist
        int ans=0;
        int sum=0;
        unordered_map<int,int> prefixes;
        prefixes[0]=1;
        for(int i:nums){
            sum+=i;
            if(prefixes[sum-k]!=0) ans+=prefixes[sum-k];
            prefixes[sum]++;           
        }
        return ans;
    }
};