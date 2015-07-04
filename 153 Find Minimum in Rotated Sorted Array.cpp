class Solution {
public:
    int findMin(vector<int>& nums) {
        int ha=0X7fffffff;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            ha=min(nums[i],ha);
        }
        return ha;
    }
};