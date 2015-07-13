class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {


        int y=grid.size();
        int x=grid[0].size();
        vector<vector<int>> result(y,vector<int>(x));
        result[0][0]=grid[0][0];
        for(int i=1;i<x;i++)
        {
            result[0][i]=grid[0][i]+result[0][i-1];
            cout<<result[0][i]<<endl;
        }
        for(int i=1;i<y;i++)
        {
            result[i][0]=grid[i][0]+result[i-1][0];
            cout<<result[i][0]<<endl;
        }
        for(int i=1;i<y;i++)
            for(int j=1;j<x;j++)
            {
                result[i][j]=grid[i][j]+min(result[i-1][j],result[i][j-1]);
                cout<<result[i][j]<<endl;
            }
        return result[y-1][x-1];
    }
};