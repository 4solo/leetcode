class Solution {
public:
    string intToRoman(int num) {
        string a;
        int count=num/1000;
        while(count>0)
        {
            a+='M';
            count--;
        }
        num=num%1000;
        count=num/100;
        while(count>0)
        {
            if(count==9)
            {
                a+="CM";
                break;
            }
            else if(count>=5)
            {
                count-=5;
                a+="D";
            }
            else if(count==4)
            {
                a+="CD";
                break;
            }
            else
            {
                a+="C";
                count--;
            }
        }
        num=num%100;
        count=num/10;
        while(count>0)
        {
            if(count==9)
            {
                a+="XC";
                break;
            }
            else if(count>=5)
            {
                count-=5;
                a+="L";
            }
            else if(count==4)
            {
                a+="XL";
                break;
            }
            else
            {
                a+="X";
                count--;
            }
        }
        num=num%10;
        count=num;
        while(count>0)
        {
            if(count==9)
            {
                a+="IX";
                break;
            }
            else if(count>=5)
            {
                count-=5;
                a+="V";
            }
            else if(count==4)
            {
                a+="IV";
                break;
            }
            else
            {
                a+="I";
                count--;
            }
        }
        return a;
    }
};