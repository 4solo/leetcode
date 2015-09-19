class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int index=0;
        int count=0;
        for(int i=0;i<size;i++)
        {
            if(nums[i]!=0)
            {
                nums[index]=nums[i];
                index++;
            }
            else
            {
                count++;
            }
        }
        for(int i=size-count;i<size;i++)
        {
            nums[i]=0;
        }
    }
};