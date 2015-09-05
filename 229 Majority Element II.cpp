class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        int size=nums.size();
        int num1,num2,count1=0,count2=0;
        for(int i=0;i<size;i++)
        {
            if(num2!=nums[i]&&count1==0)
            {
                num1=nums[i];
            }
            else if(num1!=nums[i]&&count2==0)
            {
                num2=nums[i];
            }
            if(nums[i]!=num1&&nums[i]!=num2)
            {
                count1--;
                count2--;
            }
            else if(nums[i]==num1)
            {
                count1++;
            }
            else if(nums[i]==num2)
            {
                count2++;
            }
        }
        count1=0;
        count2=0;
        for(int i=0;i<size;i++)
        {
            if(num1==nums[i])
            {
                count1++;
            }
            if(num2==nums[i])
            {
                count2++;
            }
        }
        cout<<num1<<num2<<endl;
        if(num1!=num2)
        {
            if(count1>size/3) result.push_back(num1);
            if(count2>size/3) result.push_back(num2);
        }
        else
            result.push_back(num1);
        return result;
    }
    
};