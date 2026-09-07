class Solution {
public:
    int fib(int n) {
        if (n==0) return 0;
        else if (n==1) return 1;
        return fib(n-1)+fib(n-2);
    }
};



//tc- O(2^n). Each call expands into two calls, leading to a binary recursion tree with height n.
//sc- O(n). The maximum depth of the recursion tree is n, which means that the maximum amount of space used on
//     the call stack is O(n).