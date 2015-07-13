class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowsize=matrix[0].size();
        int calsize=matrix.size();
        int mid=calsize/2;
        int start=0;
        int end=calsize-1;
        while(start<=end)
        {
            if(matrix[mid][0]<=target && matrix[mid][rowsize-1]>=target)
            {
                break;
            }
            else if(matrix[mid][0]>target)
            {
                end=mid-1;
                mid=(end+start)/2;
            }
            else if(matrix[mid][rowsize-1]<target)
            {
                start=mid+1;
                mid=(start+end)/2;
            }
        }
        int save=mid;
        mid=rowsize/2;
        start=0;
        end=rowsize-1;
        while(start<=end)
        {
            if(matrix[save][mid]==target)
            {
                return true;
            }
            else if(matrix[save][mid]>target)
            {
                end=mid-1;
                mid=(end+start)/2;
            }
            else if(matrix[save][mid]<target)
            {
                start=mid+1;
                mid=(start+end)/2;
            }
        }
        if(matrix[save][mid]==target)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};