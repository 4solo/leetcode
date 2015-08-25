class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        size++;
        int total=(size-1)*size/2;
        for(int i=0;i<size-1;i++)
        {
            total=total-nums[i];
        }
        return total;
    }
};