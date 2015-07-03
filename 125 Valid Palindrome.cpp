class Solution {
public:
    bool isPalindrome(string s) {
        int size=s.size();
        if(size==0)
            return true;
        else
        {
            for(int i=0;i<size;i++)
            {
                s[i]=toupper(s[i]);
            }
            int i=0;
            int j=size-1;
            while(i<j)
            {
                if(((s[i]<='Z'&&s[i]>='A')||(s[i]>='0'&&s[i]<='9'))&&((s[j]<='Z'&&s[j]>='A')||(s[j]>='0'&&s[j]<='9')))
                {
                    if(s[i]==s[j])
                    {
                        i++;
                        j--;
                    }
                    else
                        return false;
                }
                if(!((s[i]<='Z'&&s[i]>='A')||(s[i]>='0'&&s[i]<='9')))
                {
                    i++;
                }
                if(!((s[j]<='Z'&&s[j]>='A')||(s[j]>='0'&&s[j]<='9')))
                {
                    j--;
                }
            }
            return true;
        }
        
    }
};