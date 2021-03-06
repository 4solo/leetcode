class Solution {
public:
    void place(int r, int n,vector<string> &ha)
    {
        if(r==n)
        {
            result.push_back(ha);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(!check(r, i, n, ha))
            {
                continue;
            }
            string la(n,'.');
            la[i]='Q';
            ha.push_back(la);
            place(r+1,n,ha);
            ha.pop_back();
        }
        return;
    }
    bool check(int row,int col,int n,vector<string>&ha)
    {
        if(ha.size()==0)
            return true;
        for(int i=0;i<ha.size();i++)
            if(ha[i][col]=='Q')
                return false;
        for(int i=1;row-i>=0&&col-i>=0;i++) //left upper;
            if(ha[row-i][col-i]=='Q')
                return false;
        for(int i=1;row-i>=0&&col+i<n;i++) //right upper;
            if(ha[row-i][col+i]=='Q')
                return false;
        return true;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>ha;
        place(0,n,ha);
        return result;
    }
private:
    vector<vector<string>> result;
};