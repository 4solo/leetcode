class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>>& board)
    {
        int r,c;
        while(!check(r,c,board))
        {
            for(int i=1;i<=9;i++)
            {
                char letter=i+'0';
                if(number(board,r,c,letter))
                {
                    board[r][c]=letter;
                    if(solve(board)) return true;
                    board[r][c]='.';
                }
                
            }
            return false;
        }
        return true;
    }
    bool number(vector<vector<char>>&board,int &row, int&col,char num)
    {
        for(int i=0;i<9;i++) //row and col check;
        {
            if((board[row][i]==num&&i!=col)||(board[i][col]==num&&i!=row))
            {
                return false;
            }
        }
        int r=row,c=col;
        c=(c/3)*3;
        r=(r/3)*3;
        int r3=r+3;
        int c3=c+3;
        for(r;r<r3;r++)
        {
            for(c;c<c3;c++)
            {
                if(board[r][c]==num&&(r!=row)&&(c!=col))
                {
                    return false;
                }
            }
            c=(col/3)*3;
        }
        return true;
    }
    bool check(int& row, int& col, vector<vector<char>>& board)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                {
                    row=i;
                    col=j;
                    return false;
                }
            }
        }
        return true;
    }
};