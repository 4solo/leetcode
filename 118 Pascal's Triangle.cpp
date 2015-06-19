class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> list;
        vector<int> temp;
        if(numRows==0)
        {
            return list;
        }
        else if(numRows>=1)
        {
            temp.push_back(1);
            list.push_back(temp);
            numRows--;
            int i=0;
            while(numRows>0)
            {
                temp.clear();
                if(list[i].size()>=1)
                {
                    int size=list[i].size();
                    temp.push_back(1);
                    for(int j=0;j<size-1;j++)
                    {
                        temp.push_back(list[i][j]+list[i][j+1]);
                    }
                    temp.push_back(1);
                }
                list.push_back(temp);
                i++;
                numRows--;
            }
        }
        return list;
    }
};