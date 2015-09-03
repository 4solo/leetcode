class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int y=matrix.size();
        if(y==0) return;
        int x=matrix[0].size();
        if(x==0) return;
        int n;
        int temp;
        if(x%2==0)
        {
            n=x/2;
            int size=x-1;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    temp=matrix[i][j];
                    matrix[i][j]=matrix[size-j][i];
                    matrix[size-j][i]= matrix[size-i][size-j];
                    matrix[size-i][size-j]=matrix[j][size-i];
                    matrix[j][size-i]=temp;
                }
            }
        }
        else
        {
            n=x/2;
            int size=x-1;
            for(int i=0;i<=n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    temp=matrix[i][j];
                    matrix[i][j]=matrix[size-j][i];
                    matrix[size-j][i]= matrix[size-i][size-j];
                    matrix[size-i][size-j]=matrix[j][size-i];
                    matrix[j][size-i]=temp;
                }
            }
        }
        return;
    }
    
};