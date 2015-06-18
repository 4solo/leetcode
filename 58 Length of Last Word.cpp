class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=s.size();
        int count=0;
        if(size==0)
        {
            return 0;
        }
        else
        {
            for(int i=size-1;i>=0;i--)
            {
                if(s[i]==' '&&count!=0)
                {
                    break;
                }
                else if(s[i]!=' ')
                {
                    count++;
                }
            }
        }
        return count;
    }
};