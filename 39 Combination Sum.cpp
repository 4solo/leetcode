class Solution {
public:
    void findall(vector<int>& candidates,vector<int>&ha, int target, int startindex)
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
            ha.push_back(candidates[i]);
            target-=candidates[i];
            findall(candidates,ha,target,i);
            target+=candidates[i];
            ha.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ha;
        sort(candidates.begin(),candidates.end());
        findall(candidates,ha,target,0);
        return result;
    }
private:
    vector<vector<int>> result;
    
};