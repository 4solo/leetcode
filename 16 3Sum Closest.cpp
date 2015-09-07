class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int targetnew;
        int minnum=0x7fffffff;
        int startindex,endindex;
        bool bigger=false; //no bigger for 0 same is for 1 small
        for(int i=0;i<size-2;i++)
        {
            startindex=i+1;
            endindex=size-1;
            while(startindex<endindex)
            {
                int result=nums[i]+nums[startindex]+nums[endindex];
                if(result>target)
                {
                    endindex--;
                    if(minnum>abs(result-target))
                    {
                        bigger=true;
                        minnum=abs(result-target);
                    }
                }
                else if(result<target)
                {
                    startindex++;
                    if(minnum>abs(target-result))
                    {
                        bigger=false;
                        minnum=abs(target-result);
                    }
                }
                else
                {
                    return target;
                }
            }
        }
        if(bigger) return target+minnum;
        else return target-minnum;
        
    }
};