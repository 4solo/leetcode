class Solution {
public:
    void findall(vector<int>&nums, vector<int>&ha,int arr[])
    {
        int size=nums.size();
        int sizeha=ha.size();
        if(sizeha==size)
        {
            result.push_back(ha);
            return;
        }
        for(int i=0;i<size;i++)
        {
            if(arr[i]==0)
            {
                arr[i]=1;
                ha.push_back(nums[i]);
                findall(nums,ha,arr);
                ha.pop_back();
                arr[i]=0;
            }
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ha;
        int size=nums.size();
        int arr[size];
        for(int i=0;i<size;i++)
        {
            arr[i]=0;
        }
        findall(nums,ha,arr);
        return result;
    }
private:
    vector<vector<int>>result;
};