class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        int size=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<=size;i++)
        {
            findall(0,i,nums);
        }
        set<vector<int>>::iterator it;
        for(it=myset.begin();it!=myset.end();it++)
        {
            result.push_back(*it);
        }
        return result;
    }
void findall(int start, int size,vector<int>& nums)
{
    int s=nums.size();
    if(size==0)
    {
        myset.insert(temp);
        return;
    }
    for(int i=start;i<s;i++)
    {
        temp.push_back(nums[i]);
        findall(i+1,size-1,nums);
        temp.pop_back();
    }
}
private:
    set<vector<int>> myset;
    vector<int> temp;
};