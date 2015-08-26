class Solution {
public:
    int trap(vector<int>& height) {
        int size=height.size();
        if(size<=2)
        {
            return 0;
        }
        int endindex=size-1;
        int startindex=0;
        int count=0;
        int minnum=0;
        while(startindex<endindex)
        {
            while(height[startindex]==minnum&&startindex<endindex)
            {
                startindex++;
            }
            while(height[endindex]==minnum&&startindex<endindex)
            {
                endindex--;
            }
            minnum=min(height[startindex],height[endindex]);
            for(int i=startindex;i<endindex;i++)
            {
                if(height[i]<minnum)
                {
                    count=count+minnum-height[i];
                    height[i]=minnum;
                }
            }
        }
        return count;
    }
};