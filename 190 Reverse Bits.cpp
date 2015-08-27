class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ha=0;
        int count=0;
        int time=32;
        while(time!=0)
        {
            if(time==32)
            {
                ha=ha|(n&1);
            }
            else
            {
                ha=ha<<1;
                ha=ha|(n&1);
            }
            n=n>>1;
            time--;
        }
        return ha;
    }
};