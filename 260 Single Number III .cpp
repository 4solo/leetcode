class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> result(2);
        int size=nums.size();
        if(size<=2)
        {
            return nums;
        }
        int add=nums[0];
        for(int i=1;i<size;i++)
        {
            add^=nums[i];
        }
        int count=0;
        while((add&1)!=1)
        {
            add>>=1;
            count++;
        }
        cout<<count<<endl;
        for(int i=0;i<size;i++)
        {
            if((nums[i]>>count)&1==1)
            {
                result[0]^=nums[i];
            }
            else
            {
                result[1]^=nums[i];
            }
        }
        result[0]^=0;
        result[1]^=0;
        return result;
    }
};