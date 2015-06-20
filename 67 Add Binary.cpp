class Solution {
public:
    string addBinary(string a, string b) {
        stack<char> stacka;
        stack<char> stackb;
        stack<int> result;
        for(int i=0;i<a.size();i++)
        {
            stacka.push(a[i]);
        }
         for(int i=0;i<b.size();i++)
        {
            stackb.push(b[i]);
        }
        int atop;
        int btop;
        int carry=0;
        while(!stacka.empty()&&!stackb.empty())
        {
            atop=stacka.top()-48;
            btop=stackb.top()-48;
            if(atop+btop+carry>=2)
            {
                result.push((atop+btop+carry)%2);
                carry=1;
            }
            else
            {
                result.push((atop+btop+carry)%2);
                carry=0;
            }
            stacka.pop();
            stackb.pop();
        }
        while(!stacka.empty())
        {
            atop=stacka.top()-48;
            if(atop+carry>=2)
            {
                result.push((atop+carry)%2);
                carry=1; 
            }
            else
            {
                result.push((atop+carry)%2);
                carry=0;
            }
            stacka.pop();
        }
        while(!stackb.empty())
        {
            btop=stackb.top()-48;
            if(btop+carry>=2)
            {
                result.push((btop+carry)%2);
                carry=1; 
            }
            else
            {
                result.push((btop+carry)%2);
                carry=0;
            }
            stackb.pop();
        }
        if(carry==1)
        {
            result.push(carry);
            carry=0;
        }
        string s;
        char resulttop;
        while(!result.empty())
        {
            resulttop=result.top()+48;
            s+=resulttop;
            result.pop();
        }
        return s;
    }
};