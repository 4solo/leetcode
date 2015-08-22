class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int arr[32];
        int size=nums.size();
        for(int j=0;j<32;j++)
        {
            arr[j]=0;
            for(int i=0;i<size;i++)
            {
                arr[j]+=(nums[i]>>j)&1;
            }
        }
        int result=0;
        for(int i=0;i<32;i++)
        {
            result+=(arr[i]%3)<<i;
        }
        return result;
    }
};