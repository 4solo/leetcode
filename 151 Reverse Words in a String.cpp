class Solution {
public:
    void reverseWords(string &s) {
        stack<string> mystack;
        int size=s.size();
        string temp;
        for(int i=0;i<size;i++)
        {
            if(s[i]!=' ')
            {
                temp+=s[i];
            }
            else
            {
                if(temp.size()!=0)
                {
                    mystack.push(temp);
                    temp.clear();
                }
            }
        }
        if(temp.size()!=0)
                {
                    mystack.push(temp);
                    temp.clear();
                }
        s.clear();
        while(mystack.size()>1)
        {
            s+=mystack.top();
            s+=" ";
            mystack.pop();
        }
        if(!mystack.empty())
        s+=mystack.top();
    }
};