class Solution {
public:
    void find(vector<int> num,int startindex, int endindex,int target)
    {
        int start=startindex;
        int end=endindex;
        int startnum;
        int endnum;
        while(start<end)
        {
            if(num[start]+num[end]==target)
            {
               startnum=num[start];
               endnum=num[endindex];
               ha.push_back(0-target);
               ha.push_back(num[start]);
               ha.push_back(num[end]);
               result.push_back(ha);
               ha.clear();
               while(startnum==num[start]&&start!=end)
               {
                   start++;
               }
               while(endnum==num[end]&&end!=start)
               {
                   end--;
               }
            }
            else if(num[start]+num[end]>target)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int target,prev;
        for(int i=0;i<size-2;i++) //target
        {
            target=0-nums[i];
            if(prev==nums[i])
            {
                continue;
            }
            find(nums,i+1,size-1,target);
            prev=nums[i];
        }
        return result;
    }
private:
        vector<vector<int>> result;
        vector<int> ha;
};