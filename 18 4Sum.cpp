class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        vector<int> ha;
        vector<vector<int>> final;
        for(int i=0;i<size-3;i++)
        {
            int numberi=nums[i];
            for(int j=i+1;j<size-2;j++)
            {
                int startindex=j+1;
                int endindex=size-1;
                int number=nums[j];
                int targetnew=target-nums[i]-nums[j];
                while(startindex<endindex)
                {
                    int result=nums[startindex]+nums[endindex];
                    if(result>targetnew)
                    {
                        endindex--;
                    }
                    else if(result<targetnew)
                    {
                        startindex++;
                    }
                    else
                    {
                        ha.clear();
                        ha.push_back(nums[i]);
                        ha.push_back(nums[j]);
                        ha.push_back(nums[startindex]);
                        ha.push_back(nums[endindex]);
                        final.push_back(ha);
                        int saves=nums[startindex];
                        int savee=nums[endindex];
                        while(startindex<endindex)
                        {
                            startindex++;
                            if(saves!=nums[startindex])
                            {
                                break;
                            }
                        }
                        while(startindex<endindex)
                        {
                            endindex--;
                            if(savee!=nums[endindex])
                            {
                                break;
                            }
                        }
                    }
                }
                while(j+1<size-2)
                {
                    ++j;
                    if(number!=nums[j])
                    {
                        j--;
                        break;
                    }
                }
            }
            while(i+1<size-3)
            {
                ++i;
                if(numberi!=nums[i])
                {
                    i--;
                    break;
                }
            }
        }
        return final;
    }
};