#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int n=x;
        long long reversed=0;

        while(n){
            reversed*=10;
            reversed+=n%10;
            n/=10;
        }

        if (reversed>=INT_MAX || reversed<=INT_MIN){
            return 0;
        }

        return reversed;
    }
};