#include <vector>
using namespace std;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        //int maxSum=0;
        int sum=nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1==nums[i]) sum+=nums[i];
            else {
                break;
            }
        }

        //if(maxSum==0 && sum!=0) maxSum=sum;

        while(find(nums.begin(),nums.end(),sum) != nums.end()){
            sum++;
        }

        return sum;
    }
};