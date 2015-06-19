class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> myset;
        set<int>:: iterator it;
        for(int i=0;i<nums.size();i++)
        {
            myset.insert(nums[i]);
        }
        for(int i=1;;i++)
        {
            it=myset.find(i);
            if(it==myset.end())
            {
                return i;
            }
        }
        
    }
};