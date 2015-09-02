class Solution {
public:
    bool solve(vector<vector<char>>&board,string& word,int index,int x,int y)
    {
        int size=word.size();
        int sizey=board.size();
        if(sizey==0&&size==0) return true;
        if(sizey==0&&size!=0) return false;
        int sizex=board[0].size();
        if(index==size) return true;
        if(board[y][x]==word[index])
        {
            board[y][x]='$';
            if(x+1<sizex)
            {
                if(solve(board,word,index+1,x+1,y))//go right;
                    return true;
            }
            if(y+1<sizey)
            {
                if(solve(board,word,index+1,x,y+1))//go down;
                    return true;
            }
            if(y-1>=0)
            {
                if(solve(board,word,index+1,x,y-1))//go up;
                    return true;
            }
            if(x-1>=0)
            {
                if(solve(board,word,index+1,x-1,y))//go left;
                    return true;
            }
            board[y][x]=word[index];
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int sizey=board.size();
        int size=word.size();
        if(size==0) return true;
        if(sizey==size&&size==0) return true;
        int sizex=board[0].size();
        for(int i=0;i<sizey;i++)
        {
            for(int j=0;j<sizex;j++)
            {
                if(board[i][j]==word[0]&&size!=1)
                {
                    if(solve(board,word,0,j,i))
                    {
                        return true;
                    }
                }
                else if(board[i][j]==word[0]&&size==1)
                {
                    return true;
                }
            }
        }
        return false;
    }
};