class Solution {
public:
    int rectCover(int number) {
        if(number<=0)
            return 0;
        if(number==1 || number==2)
            return number;
        int f1 = 1;
        int f2 = 2;
        int cur = 0;
        for(int i=3; i<=number; i++)
        {
            cur = f1+f2;
            f1 = f2;
            f2 = cur;
        }
        return cur;

    }
};