class Solution {
public:
    bool isHappy(int n) {
        set<int> mymap;
        set<int> ::iterator it;
        stack<int> mystack;
        int ha;
        int total=n;
        while(mymap.empty()||it==mymap.end())
        {
            mymap.insert(total);
            while(total)
            {
                ha=total%10;
                mystack.push(ha);
                total=total/10;
            }
            total=0;
            while(!mystack.empty())
            {
                total=pow(mystack.top(),2)+total;
                mystack.pop();
            }
            if(total==1)
            {
                return true;
            }
            it=mymap.find(total);
        }
        return false;
    }
    
};