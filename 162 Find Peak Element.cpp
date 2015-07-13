class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size=nums.size();
        int start=0;
        int end=size-1;
        int mid=(start+end)/2;
        if(size==1)
        {
            return 0;
        }
        while(start<=end)
        {
            if(mid!=size-1&&mid!=0)
            {
                if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1])
                {
                    return mid;
                }
                else if(nums[mid]<nums[mid-1])
                {
                    end=mid-1;
                    mid=(start+end)/2;
                }
                else if(nums[mid]<nums[mid+1])
                {
                    start=mid+1;
                    mid=(start+end)/2;
                }
            }
            else if(mid==size-1)
            {
                if(nums[mid]>nums[mid-1])
                {
                    return mid;
                }
                else
                {
                    return mid-1;
                }
            }
            else if(mid==0)
            {
                if(nums[mid]>nums[mid+1])
                {
                    return mid;
                }
                else
                {
                    return mid+1;
                }
            }
        }
    }
};