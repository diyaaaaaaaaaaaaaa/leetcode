class Solution {
public:
    int smallestNumber(int n, int t) {
        int product=1;
        while(product%t!=0){
            int x=n;
            product=1;
            while(x){
                product *= x%10;
                if (x%10== 0) return n;
                x/=10;
            }
            if (product%t==0) return n;
            n++;
        }
        
        return n;
    }
};