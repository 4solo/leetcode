class Solution {
public:
    string convertToTitle(int n) {
        string result;
        while(n!=0)
        {
            if(n%26==0)
            {
                result.insert(result.begin(),'Z');
            }
            else
            {
                char ha='A'-1+n%26;
                result.insert(result.begin(),ha);
            }
            n=(n-1)/26;
        }
        return result;
    }
};