class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int cal=matrix.size();
        int row=matrix[0].size();
        bool calzero=false;
        bool rowzero=false;
        for(int i=0;i<cal;i++)
            {
                if(matrix[i][0]==0)
                {
                    calzero=true;
                    break;
                }
            }
        for(int j=0;j<row;j++)
        {
            if(matrix[0][j]==0)
            {
                rowzero=true;
                break;
            }
        }
        for(int i=0;i<cal;i++)
        {
            for(int j=0;j<row;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
         for(int i=1;i<cal;i++)
            {
                if(matrix[i][0]==0)
                {
                    for(int k=0;k<row;k++)
                    {
                        matrix[i][k]=0;
                    }
                }
            }
        for(int j=1;j<row;j++)
        {
            if(matrix[0][j]==0)
            {
                for(int k=0;k<cal;k++)
                    {
                        matrix[k][j]=0;
                    }
            }
        }
        if(rowzero)
        {
            for(int i=0;i<row;i++)
            {
                matrix[0][i]=0;
            }
        }
         if(calzero)
        {
            for(int i=0;i<cal;i++)
            {
                matrix[i][0]=0;
            }
        }
    }
};