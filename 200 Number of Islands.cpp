class Solution {
public:
    void search(int i,int j,vector<vector<char>>& grid,int x,int y)
    {
        if(grid[i][j]=='1')
            grid[i][j]='0';
        else
            return;
        if(i-1>=0) search(i-1,j,grid,x,y);//go top;
        if(i+1<y) search(i+1,j,grid,x,y);//go bottom;
        if(j-1>=0) search(i,j-1,grid,x,y);//go left;
        if(j+1<x) search(i,j+1,grid,x,y);//go right;
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int y=grid.size();
        if(y==0) return 0;
        int x=grid[0].size();
        for(int i=0;i<y;i++)
        {
            for(int j=0;j<x;j++)
            {
                if(grid[i][j]=='1')
                {
                    search(i,j,grid,x,y);
                    count++;
                }
            }
        }
        return count;
    }
};