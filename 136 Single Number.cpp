class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        else 
        {
            int ha=nums[0];
            for(int i=1;i<nums.size();i++)
            {
                ha=ha^nums[i];
            }
            return ha;
        }
    }
};