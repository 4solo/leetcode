class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mymap;
        unordered_map<string,vector<string>> ::iterator it;
        int size=strs.size();
        for(int i=0;i<size;i++)
        {
            string a=strs[i];
            sort(strs[i].begin(),strs[i].end());
            it=mymap.find(strs[i]);
            if(it==mymap.end())
            {
                vector<string> b;
                b.push_back(a);
                mymap.insert(pair<string,vector<string>>(strs[i],b));
            }
            else
            {
                (it->second).push_back(a);
            }
        }
        for(it=mymap.begin();it!=mymap.end();++it)
        {
            sort(it->second.begin(),it->second.end());
            result.push_back(it->second);
        }
        return result;
    }
private:
    vector<vector<string>> result;
};