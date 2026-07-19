#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;

        for(int i=0;i<nums.size();i++){
            int cnt=0;
            int temp=0;
            if(nums[i]<6) continue;

            for(int j=1;j*j<=nums[i];j++){

                if (nums[i]%j==0){
                    if(nums[i]/j == j) {
                        cnt++;
                        temp+=j;
                    } else {
                        cnt+=2;
                        temp+=j;
                        temp+=nums[i]/j;
                    }
                }
                if (cnt>4) break;
            
            }

            if(cnt==4){
                sum+=temp;
            }
        }
        return sum;
    }
};