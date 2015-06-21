class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        while(m<nums1.size())
        {
            nums1.pop_back();
        }
        while(n<nums2.size())
        {
            nums2.pop_back();
        }
        while(i<nums1.size()&&j<n)
        {
            if(nums2[j]<=nums1[i])
            {
                nums1.insert(nums1.begin()+i,nums2[j]);
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        while(j<n)
        {
            nums1.insert(nums1.end(),nums2[j]);
            j++;
        }
    }
};