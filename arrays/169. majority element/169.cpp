//1st
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};

//Moore's Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0, elem=nums[0];

        for(int i=0;i<nums.size();i++){
            if (count==0) elem=nums[i];
            if (nums[i]==elem) count++;
            else count--;
        }

        return elem;
    }
};