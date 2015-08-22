class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total=1;
        int size=nums.size();
        int countzero=0;
        int index=-1;
        for(int i=0;i<size;i++)
        {
            if(nums[i]!=0)
            {
                total=total*nums[i];
            }
            else
            {
                countzero++;
                index=i;
            }
        }
        vector<int> myvector(size);
        if(countzero>=2)
        {
            return myvector;
        }
        else if(countzero==1)
        {
            myvector[index]=total;
            return myvector;
        }
        else
        {
            for(int i=0;i<size;i++)
            {
                myvector[i]=total/nums[i];
            }
            return myvector;
        }
    }
};