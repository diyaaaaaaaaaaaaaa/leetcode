//1st BRUTE FORCE
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int maxSIze=0;

        int end=0;
        for(int start=0;start<n;start++){
            unordered_map<int,int> freq;
            end=start;

            while(end<n){
                freq[nums[end]]++;

                if(freq[nums[end]]>k ) {
                    break;
                }

                int size=end-start+1;
                if(maxSIze<size)maxSIze=size;

                end++;
            }
        }
        return maxSIze;
    }
};

//SLIDING WINDOW OPTIMIZED
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int maxSIze=0;
        unordered_map<int,int> freq;

        int start=0;
        for(int end=0;end<n;end++){
            freq[nums[end]]++;

            while(freq[nums[end]]>k){
                freq[nums[start]]--;
                start++;
            }
            
            maxSIze=max(maxSIze,end-start+1);
        }
        return maxSIze;
    }
};