#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int val1= nums[0];
        

        for(int i=0;i<n;i++){
            val1= max(val1, nums[i]);
            int val2=nums[i];
            for(int j=i;j<n;j++){
                val2= min(val2, nums[j]);
            }
            
            if (val1-val2<=k) return i;
        }

        return -1;
    }
};