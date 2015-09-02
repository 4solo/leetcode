class Solution {
public:
    int jump(vector<int>& nums) {
        int size=nums.size();
        if(size<=1)
            return 0;
        int index=0;
        int save=0;
        int maxnum=0;
        int sum=0;
        while(index<=save)
        {
            maxnum=max(maxnum,index+nums[index]);
            if(index==save)
            {
                save=maxnum;
                sum++;
                if(maxnum>=size-1) return sum;
            }
            if(index==save&&nums[maxnum]==0)
            {
                return 0;
            }
            index++;
        }
        return 0;
    }
};