class Solution {
public:
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        int size=s.size();
        bool arr[size+1];
        arr[0]=true;
        for(int i=1;i<=size;i++)
        {
            for(int k=0;k<i;k++)
            {
                arr[i]=(arr[k]&&(wordDict.find(s.substr(k,i-k))!=wordDict.end()));
                if(arr[i])
                    break;
            }
        }
        return arr[size];
    }
};