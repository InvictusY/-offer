class Solution {
public:
    int jumpFloor(int number) {
        if(number==1)
            return 1;
        if(number==2)
            return 2;
        int f1 = 1;
        int f2 = 2;
        int cur;
        for(int i=3; i<=number; i++)
        {
            cur = f1+f2;
            f1 = f2;
            f2 = cur;
        }
        return cur;
    }
};