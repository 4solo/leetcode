class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size1=strs.size();
        if(size1==0)return "";
        int size2=strs[0].size();
        for(int i=0;i<size2;i++) //第一个参照的第一个字母开始
        {
            for(int j=1;j<size1;j++)//和他下面的第一个字母比
            {
                if(i>=strs[j].size()||strs[j][i]!=strs[0][i]) //如果超过他的size了 或者不一样了。 就return
                {
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0]; //全比完没事 return 第一个参照物
    }
};