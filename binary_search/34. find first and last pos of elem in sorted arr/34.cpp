#include <vector>
\
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int right=nums.size()-1;
        int left= 0;
        int ans1=-1, ans2=-1;

        while(left<=right){
            int mid=(right-left)/2 + left;
            if(nums[mid]>target) right=mid-1;
            else if (nums[mid]<target) left=mid+1;
            else{
                ans2=mid;
                left=mid+1;
            }
        }

        right=nums.size()-1;
        left= 0;

        while(left<=right){
            int mid=(right-left)/2 + left;
            if(nums[mid]>target) right=mid-1;
            else if (nums[mid]<target) left=mid+1;
            else{
                ans1=mid;
                right=mid-1;
            }
        }

        return {ans1, ans2};
    }
};