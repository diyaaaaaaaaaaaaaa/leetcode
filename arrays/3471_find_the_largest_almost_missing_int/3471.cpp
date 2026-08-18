#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int n=nums.size();

        for(int i=0;i<n;i++) {
            freq[nums[i]]++;
        }

        if (k==1) {
            sort(nums.begin(),nums.end());
            for(int i=n-1;i>-1;i--){
                if(freq[nums[i]]==1) return nums[i];
            }
        }

        else if (n>k) {
            if (freq[nums[0]]>1 && freq[nums[n-1]]==1) return nums[n-1];
            else if (freq[nums[n-1]]>1 && freq[nums[0]]==1) return nums[0];
            else if (freq[nums[n-1]]==1 && freq[nums[0]]==1) return max(nums[0],nums[n-1]);
            else return -1;
        }

        else if(n==k) {
            sort(nums.begin(),nums.end());
            return nums[n-1];
        }
        
        return -1;
    }
};