class Solution {
public:
    int trailingZeroes(int n) {
        int result=0;
        int count=1;
        long long int w=pow(5,count);
        while(n>=w)
        {
            result=result+n/w;
            count++;
            w=pow(5,count);
        }
        return result;
    }
};