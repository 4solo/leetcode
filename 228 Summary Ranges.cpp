class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int index=0;
        int start=0;
        int end=0;
        int size=nums.size();
        if(size==0)
        {
            return result;
        }
        
        start=nums[0];
        end=nums[0];
        string ha;
        for(int i=1;i<size;i++)
        {
            if(nums[i]-1==nums[i-1])
            {
                end=nums[i];
            }
            else
            {
                if(start==end)
                {
                    ha+=to_string(start);
                    result.push_back(ha);
                    ha.clear();
                    start=nums[i];
                    end=nums[i];
                }
                else
                {
                    ha+=to_string(start);
                    ha+="->";
                    ha+=to_string(end);
                    result.push_back(ha);
                    ha.clear();
                    start=nums[i];
                    end=nums[i];
                }
            }
        }
        if(start==end)
        {
            ha+=to_string(start);
            result.push_back(ha);
            ha.clear();
        }
        else
        {
            ha+=to_string(start);
            ha+="->";
            ha+=to_string(end);
            result.push_back(ha);
            ha.clear();
        }
        return result;
    }
};