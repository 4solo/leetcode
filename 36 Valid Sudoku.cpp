class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> result(9);
        int num;
        for(int i=0;i<9;i++) //row
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]<='9'&&board[i][j]>='1')
                {
                    num=board[i][j]-'1';
                    result[num]++;
                }
            }
            for(int k=0;k<9;k++)
            {
                if(result[k]>1)
                {
                    return false;
                }
                result[k]=0;
            }
        }
        for(int i=0;i<9;i++) //cal
        {
            for(int j=0;j<9;j++)
            {
                if(board[j][i]<='9'&&board[j][i]>='1')
                {
                    num=board[j][i]-'1';
                    result[num]++;
                }
            }
            for(int k=0;k<9;k++)
            {
                if(result[k]>1)
                {
                    return false;
                }
                result[k]=0;
            }
        }
        int count=0;
        int start1=0;
        int end1=3;
        int start2=0;
        int end2=3;
        while(count<9)
        {
            if(count%3==0&&count!=0)
            {
                start1+=3;
                end1+=3;
                start2=0;
                end2=3;
            }
            for(int i=start1;i<end1;i++)
            {
                for(int j=start2;j<end2;j++)
                {
                    if(board[i][j]<='9'&&board[i][j]>='1')
                    {
                     num=board[i][j]-'1';
                     result[num]++;
                    }
                }
            }
            for(int k=0;k<9;k++)
                {
                    if(result[k]>1)
                    {
                     return false;
                    }
                    result[k]=0;
                }
            start2+=3;
            end2+=3;
            count++;
        }
        return true;
    }
};