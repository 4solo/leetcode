class Solution {
public:
    double myPow(double x, int n) {
        if(n>=0)
        {
            if(n==0)
            {
                return 1;
            }
            else if(n%2==1) //odd
            {
                return x*pow(x,(n-1)/2)*pow(x,(n-1)/2);
            }
            else if(n%2==0)
            {
                return pow(x,n/2)*pow(x,n/2);
            }
        }
        else
        {
            return 1/pow(x,0-n);
        }
    }
};