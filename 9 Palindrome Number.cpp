class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        int ha=0;
        while(y>0)
        {
            ha=ha*10+(y%10);
            y=y/10;
        }
        return ha==x;
    }
};