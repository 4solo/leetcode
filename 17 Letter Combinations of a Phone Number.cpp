class Solution {
public:
    void findall(string digits,string help, int start,string ha)
    {
        int size=digits.size();
        if(size==0)
        {
            return;
        }
        if(start==size)
        {
            result.push_back(ha);
            return;
        }
        int startindex;
        int endindex;
        switch (digits[start])
        {
            case '2':
                startindex=0;
                endindex=2;
                break;
            case '3':
                startindex=3;
                endindex=5;
                break;
            case '4':
                startindex=6;
                endindex=8;
                break;
            case '5':
                startindex=9;
                endindex=11;
                break;
            case '6':
                startindex=12;
                endindex=14;
                break;
            case '7':
                startindex=15;
                endindex=18;
                break;
            case '8':
                startindex=19;
                endindex=21;
                break;
            case '9':
                startindex=22;
                endindex=25;
                break;
        }
        for(int i=startindex;i<=endindex;i++)
        {
            ha.push_back(help[i]);
            start=start+1;
            findall(digits,help,start,ha);
            start=start-1;
            ha.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string ha="abcdefghijklmnopqrstuvwxyz";
        string haha;
        findall(digits,ha,0,haha);
        return result;
    }
private:
    vector<string> result;
};