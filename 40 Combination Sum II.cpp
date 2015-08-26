class Solution {
public:
    void findall(vector<int>& candidates, vector<int>& ha, int target , int startindex)
    {
        if(target==0)
        {
            result.push_back(ha);
            return;
        }
        if(target<0)
        {
            return;
        }
        int size=candidates.size();
        for(int i=startindex;i<size;i++)
        {
            target-=candidates[i];
            ha.push_back(candidates[i]);
            findall(candidates,ha,target,i+1);
            ha.pop_back();
            target+=candidates[i];
            int a=1;
            for(int j=i;j<size;j++)
            {
                if(candidates[i]==candidates[j])
                {
                    continue;
                }
                else
                {
                    i=j-1;
                    a=0;
                    break;
                }
            }
            if(a)
            {
                i=size-1;
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> ha;
        vector<int> copy;
        findall(candidates,ha,target,0);
        int size=result.size();
        return result;
    }
private:
    vector<vector<int>> result;
};