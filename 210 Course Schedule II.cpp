class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<set<int>> need(numCourses);
        vector<set<int>> go(numCourses);
        set<int>::iterator it;
        set<int>::iterator j;
        queue<int> ha;
        vector<int> resu;
        int size=prerequisites.size();
        for(int i=0;i<size;i++)
        {
            //go to go list check which class can be finish;
            int a=prerequisites[i].second,b=prerequisites[i].first;
            go[a].insert(b);
            need[b].insert(a);
        }
        for(int i=0;i<numCourses;i++)
        {
            if(need[i].size()==0)
            {
                ha.push(i);
                resu.push_back(i);
            }
        }
        while(!ha.empty())
        {
            int index=ha.front();
            for(j=go[index].begin();j!=go[index].end();j++)
            {
                int classes=*j;
                it=need[classes].find(index);
                if(it!=need[classes].end())
                    need[classes].erase(it);
                if(need[classes].size()==0)
                {
                    ha.push(classes);
                    resu.push_back(classes);
                }
            }
            ha.pop();
        }
        vector<int> result;
        for(int i=0;i<numCourses;i++)
        {
            if(need[i].size()!=0)
            {
                return result;
            }
        }
        return resu;
    }
};