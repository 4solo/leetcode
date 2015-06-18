class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int size=s.size();
        map<char,char>mymap;
        map<char,char>::iterator it;
        for(int i=0;i<size;i++)
        {
            it=mymap.find(s[i]);
            if(it==mymap.end())
            {
                mymap.insert(pair<char,char>(s[i],t[i]));
            }
            else
            {
                if(mymap[s[i]]!=t[i])
                    return false;
            }
        }
        mymap.clear();
        for(int i=0;i<size;i++)
        {
            it=mymap.find(t[i]);
            if(it==mymap.end())
            {
                mymap.insert(pair<char,char>(t[i],s[i]));
            }
            else
            {
                if(mymap[t[i]]!=s[i])
                    return false;
            }
        }
        return true;
    }
};