class Solution {
public:
    int rob(vector<int>& nums) {
        int size=nums.size();
        vector<int> result(size);
        if(size==0) return 0;
        if(size==1) return nums[0];
        if(size==2) return max(nums[0],nums[1]);
        result[0]=nums[0];
        result[1]=max(nums[0],nums[1]);
        for(int i=2;i<size;i++)
        {
            result[i]=max(result[i-2]+nums[i],result[i-1]);
        }
        return result[size-1];
    }
};