class Solution {
public:
    long long countCommas(long long n) {
        long long k=n;
        int cnt=0;

        while(k>0){
            cnt++;
            k/=10;
        }

        if (cnt<4) return 0;
        else if (cnt<7) return n-1000+1;
        else if (cnt<10) return (n-1000+1)+(n-1000000+1);
        else if (cnt<13) return (n-1000+1)+(n-1000000+1)+(n-1000000000+1);
        else if(cnt==16) return 1+(n-1000+1)+(n-1000000+1)+(n-1000000000+1)+(n-1000000000000+1);
        else return (n-1000+1)+(n-1000000+1)+(n-1000000000+1)+(n-1000000000000+1);
        
        return 0;
    }
};