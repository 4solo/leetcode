class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
        {
            return "1";
        }
        string temp="1";
        string result="1";
        int many=0;
        char num='a';
        while(n-1)
        {
            num='a';
            many=0;
            temp.clear();
            int size=result.size();
            for(int i=0;i<size;i++)
            {
                temp.push_back(result[i]);
            }
            result.clear();
            int size2=temp.size();
            for(int i=0;i<size2;i++)
            {
                if(num==temp[i])
                {
                    many++;
                }
                else
                {
                    if(many!=0)
                    {
                        result.append(to_string(many));
                        result+=num;
                    }
                    num=temp[i];
                    many=1;
                }
            }
            result.append(to_string(many));
            result+=num;
            n--;
        }
        return result;
    }
};