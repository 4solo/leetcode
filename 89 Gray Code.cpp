class Solution {
    
public:
    vector<int> grayCode(int n) {
        vector<int> result;
        unsigned int w=pow(2,n);
        unsigned int ha;
        unsigned lol;
        for(unsigned int i=0;i<w;i++)
        {
            ha=i;
            lol=(int)(i^(ha>>1));
            result.push_back(lol);
        }
        return result;
    }
};