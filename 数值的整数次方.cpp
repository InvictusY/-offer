class Solution {
public:
    double Power(double base, int exponent) {
        if(base==0)
            return 0;
        if(exponent<0)
        {
            base = 1/base;
            exponent = -exponent;
        }
        double result = 1;
        
        for(int i=0; i<exponent; i++)
        {
            result = result*base;
        }
        return result;
    
    }
};