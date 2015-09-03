class Solution {
public:
    void findall(string& a, int left, int right)
    {
        if(left==right&&left==0)
        {
            result.push_back(a);
            return;
        }
        if(left!=0)
        {
            a.push_back('(');
            findall(a,left-1,right);
            a.pop_back();
        }
        if(right>left)
        {
            a.push_back(')');
            findall(a,left,right-1);
            a.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        int left=n;
        int right=n;
        string ha;
        findall(ha,n,n);
        return result;
    }
private:
    vector<string> result;
};