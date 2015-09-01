class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size=nums.size();
        if(size<=1)
            return true;
        int index=0;
        int save=nums[0];
        int maxnum=0;
        while(index<=save)
        {
            maxnum=max(maxnum,index+nums[index]);
            if(maxnum>save)
            {
                save=maxnum;
            }
            if(maxnum>=size-1) return true;
            if(index==save&&nums[maxnum]==0)
            {
                return false;
            }
            index++;
        }
        return false;
    }
};