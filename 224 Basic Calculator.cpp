class Solution {
public:
    int calculate(string s) {
        string temp;
        stack<char> mystack;
        stack<int> mynumber;
        int size=s.size();
        int number=0;
        int number1;
        int number2;
        int num=0;
        for(int i=0;i<size;i++)
        {
            while(s[i]>='0'&&s[i]<='9')
            {
                number=number*10+s[i]-'0';
                num=1;
                i++;
            }
            if(num)
            {
                num=0;
                mynumber.push(number);
                number=0;
            }
            if(i>=size)
            {
                break;
            }
            else if(s[i]=='-'||s[i]=='+')
            {
                if(!mystack.empty()&&(mystack.top()=='-'||mystack.top()=='+'))
                {
                    number1=mynumber.top();
                    mynumber.pop();
                    number2=mynumber.top();
                    mynumber.pop();
                    if(mystack.top()=='-')
                    {
                        mynumber.push(number2-number1);
                    }
                    else if(mystack.top()=='+')
                    {
                        mynumber.push(number1+number2);
                    }
                    mystack.pop();
                    mystack.push(s[i]);
                }
                else
                {
                    mystack.push(s[i]);
                }
            }
            else if(s[i]=='('||s[i]==')')
            {
                if(s[i]=='(')
                {
                    mystack.push(s[i]);
                }
                else
                {
                    while(mystack.top()!='(')
                    {
                        number1=mynumber.top();
                        mynumber.pop();
                        number2=mynumber.top();
                        mynumber.pop();
                        if(mystack.top()=='-')
                        {
                            mynumber.push(number2-number1);
                        }
                        else
                        {
                            mynumber.push(number1+number2);
                        }
                        mystack.pop();
                    }
                    mystack.pop();
                }
            }
        }
        while(!mystack.empty())
        {
            number1=mynumber.top();
            mynumber.pop();
            number2=mynumber.top();
            mynumber.pop();
            if(mystack.top()=='-')
            {
                mynumber.push(number2-number1);
            }
            else
            {
                mynumber.push(number1+number2);
            }
            mystack.pop();
        }
        return mynumber.top();
    }
    
};
