class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int size=obstacleGrid.size();
        if(size==0) return 0;
        int size1=obstacleGrid[0].size();
        int arr[size][size1]={0};
        int temp=1;
        for(int i=0;i<size;i++)
        {
            if(obstacleGrid[i][0]==1)
            {
                temp=0;
            }
            arr[i][0]=temp;
        }
        temp=1;
        for(int i=0;i<size1;i++)
        {
            if(obstacleGrid[0][i]==1)
            {
                temp=0;
            }
            arr[0][i]=temp;
        }
        for(int i=1;i<size;i++)
        {
            for(int j=1;j<size1;j++)
            {
                if(obstacleGrid[i][j])
                    arr[i][j]=0;
                else
                    arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
        }
        return arr[size-1][size1-1];
    }
};