class Solution {
public:
    static bool is(int n)
    {
        if(n<=3)
        {
            return n>1;
        }
        if(n%2==0 ||n%3==0)
        {
            return false;
        }
        for(int i=5;i*i<=n;i+=6)
        {
            if(n%i==0||n%(i+2)==0)
            {
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(is(i))
            {
                count++;
            }
        }
        return count;
    }
};