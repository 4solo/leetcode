class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
        {
            return 1;
        }
        if(n==2)
        {
            return 2;
        }
        if(n>=3)
        {
            int n1=1;
            int n2=2;
            int total;
            while(n>=3)
            {
                total=n1+n2;
                n1=n2;
                n2=total;
                n--;
            }
            return total;
        }
    }
};