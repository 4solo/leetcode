class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int sizey=matrix.size();
        if(sizey==0) return result;
        int sizex=matrix[0].size();
        if(sizex==0) return result;
        int totalsize=sizey*sizex;
        int count=0;
        int i=0,j=0;
        int left=0;
        int top=0;
        int comm=1;
        while(count<totalsize)
        {
            if(result.size()==totalsize) break;
            if(comm==1)
            {
                while(j<sizex)
                {
                    result.push_back(matrix[i][j]);
                    j++;
                    count++;
                }
                j--;
                sizex--;
                comm=2;
                i++;
            }
            else if(comm==2)
            {
                while(i<sizey)
                {
                    result.push_back(matrix[i][j]);
                    i++;
                    count++;
                }
                i--;
                sizey--;
                comm=3;
                j--;
            }
            else if(comm==3)
            {
                while(j>=left)
                {
                    result.push_back(matrix[i][j]);
                    j--;
                    count++;
                }
                j++;
                left++;
                comm=4;
                i--;
            }
            else
            {
                while(i>top)
                {
                    result.push_back(matrix[i][j]);
                    i--;
                    count++;
                }
                i++;
                top++;
                comm=1;
                j++;
            }
        }
        return result;
    }
private:
    vector<int> result;
};