class Solution {
public:
    bool NeedtoSwap(vector<int>&num,int startindex,int endindex)
    {
        for(int i=startindex;i<endindex;i++)
        {
            if(num[i]==num[endindex])
                return false;
        }
        return true;
    }
    void Swap(int & a,int &b)
    {
        int temp =a;
        a=b;
        b=temp;
    }
    void findall( vector<int>& ha , int startindex, int m )
    {
        if (startindex == m)
        {
            result.push_back(ha);
            return;
        }
        else
        {
            for (int i = startindex; i <= m; i++)
            {
                if(NeedtoSwap(ha,startindex,i))
                {
                    Swap(ha[startindex], ha[i]);
                    findall(ha, startindex + 1, m);
                    Swap(ha[startindex], ha[i]);
                }
            }
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int size=nums.size();
        if(size==0) return result;
        int arr[size]={0};
        sort(nums.begin(),nums.end());
        findall(nums,0,size-1);
        return result;
    }
private:
    vector<vector<int>>result;
};