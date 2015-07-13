class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size=nums.size();
        int start=0;
        int end=size-1;
        int mid=(start+end)/2;
        int ma=-1;
        int mi=size;
        while(start<=end)
        {
          if(nums[mid]==target)
          {
              mi=min(mid,mi);
              ma=max(mid,ma);
              end=mi-1;
              mid=(end+start)/2;
          }
          else if(nums[mid]<target)
          {
              start=mid+1;
              mid=(end+start)/2;
          }
          else if(nums[mid]>target)
          {
              end=mid-1;
              mid=(end+start)/2;
          }
        }
        start=0;
        end=size-1;
        mid=(start+end)/2;
        while(start<=end)
        {
          if(nums[mid]==target)
          {
              ma=max(mid,ma);
              mi=min(mid,mi);
              start=ma+1;
              mid=(end+start)/2;
          }
          else if(nums[mid]<target)
          {
              start=mid+1;
              mid=(end+start)/2;
          }
          else if(nums[mid]>target)
          {
              end=mid-1;
              mid=(end+start)/2;
          }
        }
        vector<int> result;
        if(ma==-1&&mi==size)
        {
            result.push_back(-1);
            result.push_back(-1);
        }
        else
        {
            result.push_back(mi);
            result.push_back(ma);
        }
        return result;
    }
};