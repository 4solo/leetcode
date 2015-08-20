class Solution {
public:
    int myAtoi(string str) {
        int size=str.size();
        if(size==0)
        {
            return 0;
        }
        int total=0;
        int start=0;
        int neg=0; //negtive?
        int sign=0; //has sign?
        int number=0; //has number? 
        int overflow=0;
        int count=0;
        for(int i=start;i<size;i++)
        {
            if(str[i]>='0'&&str[i]<='9')
            {
                if(neg)
                {
                    total=total*10-(str[i]-'0');
                    if(total<0)
                    {
                        count++;
                    }
                    if(total>0)
                    {
                        overflow=1;
                    }
                }
                else
                {
                    total=total*10+(str[i]-'0');
                    if(total>0)
                    {
                        count++;
                    }
                    if(total<0)
                    {
                        overflow=1;
                    }
                }
                number=1;//has number 
            }
            else if(str[i]=='-'||str[i]=='+')
            {
                if(sign==1||number==1) //two sign
                {
                    return 0;
                }
                sign=1;
                if(str[i]=='-')
                {
                    neg=1;
                }
            }
            else if(str[i]==' ')
            {
                if(number==1||sign==1)
                {
                    return total;
                }
                continue;
            }
            else
            {
                break;
            }
            
        }
      if(neg&&(overflow||count>10))
      {
          return INT_MIN;
      }
      else if(!neg&&(overflow||count>10))
      {
          return INT_MAX;
      }
      else
      {
          return total;
      }
    }
};