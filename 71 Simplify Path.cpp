class Solution {
public:
    string simplifyPath(string path) {
        int size=path.size();
        stack<string> mystack;
        string a;
        for(int i=0;i<size;i++)
        {
            if(path[i]=='/')
            {
                a.push_back(path[i]);
                i++;
                while(i<size&&path[i]!='/')
                {
                    a.push_back(path[i]);
                    i++;
                }
                mystack.push(a);
                a.clear();
                i--;
            }
        }
        int count=0;
        string result;
        while(!mystack.empty())
        {
            if(mystack.top()=="/")
            {
                mystack.pop();
            }
            else if(mystack.top()=="/.")
            {
                mystack.pop();
            }
            else if(mystack.top()=="/..")
            {
                count++;
                mystack.pop();
            }
            else
            {
                if(count>0)
                {
                    mystack.pop();
                    count--;
                }
                else
                {
                    result.insert(0,mystack.top());
                    mystack.pop();
                }
            }
        }
        if(result.size()==0) return "/";
        return result;
    }
};