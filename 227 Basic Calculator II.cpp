class Solution {
public:
    int calculate(string s) {
        int number=0;
        int number1,number2;
        stack<int> mynumber;
        stack<char> mystack;
        int size=s.size();
        bool num=false;
        for(int i=0;i<size;i++)
        {
            while(s[i]>='0'&&s[i]<='9')
            {
                number=number*10+s[i]-'0';
                num=true;
                i++;
            }
            if(num)
            {
                mynumber.push(number);
                number=0;
                num=false;
            }
            if(i>=size)
            {
                break;
            }
            if(s[i]==' ')
            {
                continue;
            }
            if(!mystack.empty())
            {
                if(s[i]=='-'||s[i]=='+')
                {
                    while(!mystack.empty())
                    {
                        number1=mynumber.top();
                        mynumber.pop();
                        number2=mynumber.top();
                        mynumber.pop();
                        if(mystack.top()=='*')
                        {
                            mynumber.push(number2*number1);
                        }
                        else if(mystack.top()=='/')
                        {
                            mynumber.push(number2/number1);
                        }
                        else if(mystack.top()=='+')
                        {
                            mynumber.push(number2+number1);
                        }
                        else
                        {
                            mynumber.push(number2-number1);
                        }
                        mystack.pop();
                    }
                    mystack.push(s[i]);
                }
                else
                {
                    if(mystack.top()=='*'||mystack.top()=='/')
                    {
                        number1=mynumber.top();
                        mynumber.pop();
                        number2=mynumber.top();
                        mynumber.pop();
                        if(mystack.top()=='*')
                        {
                            mynumber.push(number2*number1);
                        }
                        else
                        {
                            mynumber.push(number2/number1);
                        }
                        mystack.pop();
                    }
                    mystack.push(s[i]);
                }
            }
            else
            {
                mystack.push(s[i]);
            }
            
        }
        while(!mystack.empty())
        {
            number1=mynumber.top();
            mynumber.pop();
            number2=mynumber.top();
            mynumber.pop();
            if(mystack.top()=='*')
            {
                mynumber.push(number2*number1);
            }
            else if(mystack.top()=='/')
            {
                mynumber.push(number2/number1);
            }
            else if(mystack.top()=='+')
            {
                mynumber.push(number2+number1);
            }
            else
            {
                mynumber.push(number2-number1);
            }
            mystack.pop();
        }
        return mynumber.top();
    }
};