class Solution {
public:
    int hammingWeight(uint32_t n) {
        int a=0;
        long int b=n;
        while(b>0)
        {
           
            if(b%2==1)
            {
                a++;
            }
            b=b/2;
        }
        return a;
    }
};