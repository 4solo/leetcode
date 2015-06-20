class Solution {
public:
    int titleToNumber(string s) {
        int size=s.size();
        int count=0;
        int i=0;
        if(size==0)
        {
            return 0;
        }
        else if(size==1)
        {
            return s[0]-64;
        }
        else
        {
            while(i<size)
            {
                count=count*26+s[i]-64;
                i++;
            }
        return count;
        }
        
    }
};