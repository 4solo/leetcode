class Solution {
public:
    struct keywithvalue
        {
            int key;
            int value;
        };
    static bool myfunction(keywithvalue i, keywithvalue j)
    {
        return (i.value<j.value);
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<keywithvalue> myvector;
        for(int i=0;i<nums.size();i++)
        {
                keywithvalue ha;
                ha.key=i+1; //index;
                ha.value=nums[i];
                myvector.push_back(ha);
        }
        sort(myvector.begin(),myvector.end(),myfunction);
        int be=0;
        int en=myvector.size()-1;
        while(myvector[be].value+myvector[en].value!=target)
        {
            if(myvector[be].value+myvector[en].value>target)
            {
                en--;
            }
            else
            {
                be++;
            }
        }
        vector<int> final;
        if(myvector[be].key<myvector[en].key)
        {
            final.push_back(myvector[be].key);
            final.push_back(myvector[en].key);
        }
        else
       {
            final.push_back(myvector[en].key);
            final.push_back(myvector[be].key);
       }
        return final;
    }
   
};