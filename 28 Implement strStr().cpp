class Solution {
public:
    int strStr(string haystack, string needle) {
        int arr[256];
        int size=needle.size();
        for(int i=0;i<256;i++)
        {
            arr[i]=-1;
        }
        
        for(int i=0;i<size;i++)
        {
            arr[needle[i]]=i; //set to last appear
        }
        int sizeh=haystack.size();
        if(size==0)
        {
            return 0;
        }
        int j=0;
        int h=0;
        int start=j;
        while(j<sizeh)
        {
            if(haystack[j]==needle[h]) //if match keep going .
            {
                j++;
                h++;
            }
            else //no match
            {
                if(start+size<sizeh) //jump to next postion
                {
                    start=start+size-arr[haystack[start+size]];
                    j=start;
                    h=0;
                }
                else
                {
                    return -1;
                }
            }
            if(h==size)
            {
                return start;
            }
        }
        return -1;
    }
};