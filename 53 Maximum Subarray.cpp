class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ha=0XA0000000;
        int total=0XA0000000;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(total>0)
            {
                total=total+nums[i];
            }
            else
            {
                total=nums[i];
            }
            ha=max(total,ha);
        }
        return ha;
    }
};