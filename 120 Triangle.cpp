class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int sizey=triangle.size();
        if(sizey==0) return 0;
        for(int i=sizey-1;i>0;i--)
        {
            int sizex=triangle[i].size();
            for(int j=0;j<sizex-1;j++)
            {
                triangle[i-1][j]=triangle[i-1][j] + min(triangle[i][j],triangle[i][j+1]);
            }
        }
        return triangle[0][0];
    }
};