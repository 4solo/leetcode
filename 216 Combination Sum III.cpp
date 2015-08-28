class Solution {
public:
    void findall(vector<int> &ha, vector<int> number, int k, int n,int start)
    {
        if(n==0&&k==0)
        {
            result.push_back(ha);
            return;
        }
        if(n<=0||k==0)
            return;
        for(int i=start;i<9;i++)
        {
            n-=number[i];
            ha.push_back(number[i]);
            findall(ha,number,k-1,n,i+1);
            ha.pop_back();
            n+=number[i];
        }
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> num={1,2,3,4,5,6,7,8,9};
        vector<int> ha;
        if(n==0) return result;
        findall(ha,num,k,n,0);
        return result;
    }
private:
    vector<vector<int>> result;
};