class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> list;
        vector<int> temp;
        findall(1,n,k,list,temp);
        return list;
    }
    void findall(int start,int max,int length,vector<vector<int>> &list, vector<int> &temp)
    {
         if(length==temp.size())
         {
             list.push_back(temp);
             return;
         }
        for(int i=start;i<=max;i++)
        {
            temp.push_back(i);
            findall(i+1,max,length,list,temp);
            temp.pop_back();
        }
        
    }
};