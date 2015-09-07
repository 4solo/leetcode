class Solution {
public:
    int maxArea(vector<int>& height) {
        int left,right;
        int size=height.size();
        left=0;right=size-1;
        int maxsize=0;
        while(left<right)
        {
            maxsize=max(maxsize,(right-left)*min(height[left],height[right]));
            if(height[right]>height[left])
            {
                left++;
            }
            else if(height[right]==height[left])
            {
                right--;
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxsize;
    }
};