class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int size=nums.size();
        int mid=nums[size/2];
        vector<int> vectorbig;
        vector<int> vectorsmall;
        int count=0;
        for(int i=0;i<size;i++)
        {
            if(mid<nums[i])
            {
                vectorbig.push_back(nums[i]);
            }
            else if(mid>nums[i])
            {
                vectorsmall.push_back(nums[i]);
            }
            else
            {
                count++;
            }
        }
        int sizebig=vectorbig.size();
        int sizesmall=vectorsmall.size();
        if(k>sizebig&&k<=sizebig+count) return mid;
        if(k<=sizebig) return findKthLargest(vectorbig,k);
        if(k>sizebig) return findKthLargest(vectorsmall,k-sizebig-count);
    }
};