class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mymap;
        map<int,int>:: iterator it;
        int size=nums.size();
        for(int i=0;i<size;i++)
            {
                it=mymap.find(nums[i]);
                if(it==mymap.end())
                {
                    mymap.insert(pair<int,int>(nums[i],1));
                }
                else
                {
                    if(it->second>size/2)
                    {
                        return it->first;
                    }
                    else
                    it->second++;
                }
            }
        for ( it = mymap.begin(); it != mymap.end(); ++it)
        {
            if(it->second>size/2)
                    {
                        return it->first;
                    }
        }

    }
};