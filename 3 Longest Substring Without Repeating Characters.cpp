class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mymap;
        map<char,int>::iterator it;
        int result=0,count=0;
        int du;
        int startindex=0,endindex=0;
        for(int i=0;i<s.size();i++)
        {
           it=mymap.find(s[i]);
           if(it==mymap.end())
           {
               mymap.insert(pair<char,int>(s[i],i));
               endindex++;
           }
           else
           {
              result=max(result,endindex-startindex);
              startindex=max(it->second+1,startindex);
              it->second=i;
              endindex++;
           }
        }
        result=max(result,endindex-startindex);
        return result;
    }
};