class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int result=n-m;
        int ha=0xffffffff;
        while(result)
        {
            result>>=1;
            ha<<=1;
        }
        ha=ha^0x80000000;//remove the negative;
        return ha&m&n;
    }
    
};