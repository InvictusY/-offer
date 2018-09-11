class Solution {
public:
    int Fibonacci(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int f1 = 0;
        int f2 = 1;
        int cur;
        for(int i=2; i<=n; i++)
        {
            cur = f1+f2;
            f1 = f2;
            f2 = cur;
        }
        return cur;
    }
};