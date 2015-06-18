class Solution {
public:
    int romanToInt(string s) {
        int total=0;
        int size=s.size();
        for(int i=0;i<size;i++)
        {
            if(i+1<size)
            {
                if(s[i]=='V')
                {
                    total=total+5;
                }
                if(s[i]=='L')
                {
                    total=total+50;
                }
                if(s[i]=='D')
                {
                    total=total+500;
                }
                if(s[i]=='M')
                {
                    total=total+1000;
                }
                if(s[i]=='I')
                {
                    if(s[i+1]=='V')
                    {
                        total=total+4;
                        i++;
                        continue;
                    }
                    else if(s[i+1]=='X')
                    {
                        total=total+9;
                        i++;
                        continue;
                    }
                    else
                    {
                        total=total+1;
                    }
                }
                if(s[i]=='X')
                {
                    if(s[i+1]=='L')
                    {
                        total=total+40;
                        i++;
                        continue;
                    }
                    else if(s[i+1]=='C')
                    {
                        total=total+90;
                        i++;
                        continue;
                    }
                    else 
                    {
                        total=total+10;
                    }
                }
                if(s[i]=='C')
                {
                    if(s[i+1]=='D')
                    {
                        total=total+400;
                        i++;
                        continue;
                    }
                    else if(s[i+1]=='M')
                    {
                         total=total+900;
                         i++;
                         continue;
                    }
                    else if(s[i+1]!='M'&&s[i+1]!='D')
                    {
                        total=total+100;
                    }
                }
            }
            else
            {
                if(s[i]=='I')
                {
                    total=total+1;
                }
                else if(s[i]=='V')
                {
                    total=total+5;
                }
                else if(s[i]=='X')
                {
                    total=total+10;
                }
                else if(s[i]=='L')
                {
                    total=total+50;
                }
                else if(s[i]=='C')
                {
                    total=total+100;
                }
                else if(s[i]=='D')
                {
                    total=total+500;
                }
                else if(s[i]=='M')
                {
                    total=total+1000;
                }
            }
        }
        return total;
    }
};