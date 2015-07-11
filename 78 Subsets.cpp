class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<=size;i++)
        {
            findall(0,i,nums);
        }
        return result;
    }
void findall(int start, int size,vector<int>& nums)
{
    int s=nums.size();
    if(size==0)
    {
        result.push_back(temp);
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
    vector<vector<int>> result;
    vector<int> temp;
};