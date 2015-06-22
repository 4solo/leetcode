class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        int total=0;
        if(size==0)
        {
            return 0;
        }
        else
        {
            for(int i=1;i<size;i++)
        {
            if(nums[total]!=nums[i])
            {
                    nums[++total]=nums[i];
            }
        }
        }
        return total+1;
    }
};