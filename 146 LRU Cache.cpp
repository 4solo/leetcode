class LRUCache{
public:
    LRUCache(int capacity) {
        size=capacity;
        nowsize=0;
    }
    
    int get(int key) {
        it=mymap.find(key);
        if(it!=mymap.end())
        {
            for(int i=0;i<size;i++)
            {
                if(myvector[i]==key)
                {
                    myvector.erase(myvector.begin()+i);
                    myvector.push_back(key);
                    return it->second;
                }
            }
        }
        return -1;
    }
    
    void set(int key, int value) {
        if(nowsize==size)
        {
            it=mymap.find(key);
            if(it!=mymap.end())
            {
                it->second=value;
                for(int i=0;i<size;i++)
                {
                    if(myvector[i]==key)
                    {
                        myvector.erase(myvector.begin()+i);
                        myvector.push_back(key);
                        return;
                    }
                }
            }
            //no find
            mymap.erase(myvector[0]);
            mymap.insert(pair<int,int>(key,value));
            myvector.erase(myvector.begin());
            myvector.push_back(key);
            return ;
        }
        else
        {
            it=mymap.find(key);
            if(it!=mymap.end())
            {
                it->second=value;
                for(int i=0;i<size;i++)
                {
                    if(myvector[i]==key)
                    {
                        myvector.erase(myvector.begin()+i);
                        myvector.push_back(key);
                        return;
                    }
                }
            }
            mymap.insert(pair<int,int>(key,value));
            myvector.push_back(key);
            nowsize++;
            return ;
        }
    }
private:
    unordered_map<int,int> mymap;
    unordered_map<int,int>::iterator it;
    vector<int> myvector;
    vector<int>::iterator la;
    int size;
    int nowsize;
};