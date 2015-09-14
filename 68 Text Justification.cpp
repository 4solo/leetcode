class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        string ha;
        int size=words.size();
        if(maxWidth==0) {
            result.push_back(ha);
            return result;
        }
        int count=0;
        for(int i=0;i<size;i++)
        {
            int sizeha=ha.size();
            if(sizeha+words[i].size()<=maxWidth)
            {
                count++;
                if(words[i].size()==0)
                    ha.push_back(' ');
                else
                    ha.append(words[i]);
            }
            else
            {
                while(ha.size()<=maxWidth)
                {
                    int sizenow=ha.size();
                    if(count>1)
                    {
                        if(ha.back()==' ')
                            ha.pop_back();
                    }
                    if(ha.size()==maxWidth)
                    {
                        result.push_back(ha);
                        break;
                    }
                    for(int j=0;j<sizenow;j++)
                    {
                        if(ha[j]==' ')
                        {
                            ha.insert(j,1,' ');
                            while(j<sizenow&&ha[j]==' ')
                            {
                                j++;
                            }
                        }
                        if(ha.size()==maxWidth)
                        {
                            break;
                        }
                    }
                }
                ha.clear();
                ha.append(words[i]);
                count=1;
            }
            if(ha.size()<maxWidth)
            {
                ha.push_back(' ');
            }
        }
        while(ha.size()<=maxWidth)
        {
            if(ha.size()==maxWidth)
            {
                result.push_back(ha);
                break;
            }
            ha.push_back(' ');
        }
        return result;
    }
private:
    vector<string> result;
};