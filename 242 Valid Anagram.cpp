class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mymap;
        unordered_map<char,int>::iterator it;
        int sizea=s.size();
        int sizeb=t.size();
        if(sizea!=sizeb)
        {
            return false;
        }
        for(int i=0;i<sizea;i++)
        {
            it=mymap.find(s[i]);
            if(it!=mymap.end())
            {
                it->second++;
            }
            else
            {
                mymap.insert(pair<char,int>(s[i],1));
            }
        }
        for(int i=0;i<sizea;i++)
        {
            it=mymap.find(t[i]);
            if(it!=mymap.end())
            {
                it->second--;
                if(it->second<0)
                    return false;
            }
            else
            return false;
        }
        return true;
    }
};