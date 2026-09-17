#include<vector>
using namespace std;

class Solution {
public:
    void f(int id, int n, vector<int>& smol, vector<int>& nums, vector<vector<int>>& ans){
        if (id>=n) {
            ans.push_back(smol);
            return;
        }

        smol.push_back(nums[id]);
        f(id+1, n, smol, nums, ans);

        smol.pop_back();
        f(id+1, n, smol, nums, ans);
    }
   
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        vector<int> smol;
        f(0, n, smol, nums, ans);

        return ans;
    }
};

//smol- all the subsequences
//ans- vector of all the subsequences
