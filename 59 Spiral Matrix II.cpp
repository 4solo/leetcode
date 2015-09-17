class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n,vector<int>(n));
        int now=1;
        int i=0,j=0;
        int left=0,up=0;
        int sizex=n;
        int sizey=n;
        int total=n*n;
        int comm=1;
        while(now<=total)
        {
            if(comm==1)
            {
                while(j<sizex)
                {
                    result[i][j]=now;
                    now++;
                    j++;
                }
                j--;
                i++;
                comm=2;
                sizex--;
            }
            else if(comm==2)
            {
                while(i<sizey)
                {
                    result[i][j]=now;
                    now++;
                    i++;
                }
                i--;
                j--;
                comm=3;
                sizey--;
            }
            else if(comm==3)
            {
                while(j>=left)
                {
                    result[i][j]=now;
                    now++;
                    j--;
                }
                i--;
                j++;
                comm=4;
                left++;
            }
            else
            {
                while(i>up)
                {
                    result[i][j]=now;
                    now++;
                    i--;
                }
                i++;
                j++;
                comm=1;
                up++;
            }
        }
        return result;
    }
};