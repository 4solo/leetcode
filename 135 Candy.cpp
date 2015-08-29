class Solution {
public:
    int candy(vector<int>& ratings) {
        int size=ratings.size();
        int total[size]={0};
        for(int i=1;i<size;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                if(total[i]<=total[i-1])
                {
                    total[i]=total[i-1]+1;
                }
            }
        }
        for(int i=size-1;i>0;i--)
        {
            if(ratings[i]<ratings[i-1])
            {
                if(total[i]>=total[i-1])
                {
                    total[i-1]=total[i]+1;
                }
            }
        }
        int result=size;
        for(int i=0;i<size;i++)
            result+=total[i];
        return result;
    }
};