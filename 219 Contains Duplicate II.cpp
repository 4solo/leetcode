class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int size=nums.size();
        unordered_map<int,int> mymap;
        unordered_map<int,int> ::iterator it;
        for(int i=0;i<size;i++)
        {
            it=mymap.find(nums[i]);
            if(it==mymap.end())
            {
                mymap.insert(pair<int,int>(nums[i],i));
            }
            else
            {
                int ha=i-it->second;
                if(ha<=k)
                {
                    return true;
                }
                it->second=i;
            }
        }
        return false;
        
    }
};