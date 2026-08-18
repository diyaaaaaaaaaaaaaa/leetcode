#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;
        vector<int> op;

        for(int i=0;i<nums.size();i++){
            int comp=target-nums[i];
            if (freq.find(comp)==freq.end()) freq[nums[i]]=i;
            else return {i, freq[comp]};
        }

        return op;
    }
};