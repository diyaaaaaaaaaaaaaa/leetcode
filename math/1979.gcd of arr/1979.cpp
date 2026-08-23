#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minn=nums[0], maxx=nums[0];

        for(int i=0;i<nums.size();i++){
            minn= min(minn,nums[i]);
            maxx=max(maxx,nums[i]);
        }

        return gcd(minn,maxx);
    }
};