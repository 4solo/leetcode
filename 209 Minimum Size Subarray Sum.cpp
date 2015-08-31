class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int size=nums.size();
        if(size==0) return 0;
        int index1=0,index2=0;
        int total=0;
        int minnum=0x7fffffff;
        int save=0;
        while(index2<size||total>=s)
        {
            if(total>=s)
            {
                minnum=min(minnum,save-index1+1);
                total-=nums[index1];
                index1++;
            }
            else
            {
                total+=nums[index2];
                save=index2;
                index2++;
            }
        }
        return minnum==0x7fffffff?0:minnum;
    }
};