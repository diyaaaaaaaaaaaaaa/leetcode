class Solution {
public:
    int countCommas(int n) {
        int k=n;
        int cnt=0;

        while(k>0){
            cnt++;
            k/=10;
        }

        if (cnt<4) return 0;
        else return n-1000+1;

        return 0;
    }
};