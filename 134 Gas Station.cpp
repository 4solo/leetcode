class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size=gas.size();
        vector<int> myvector;
        if(size==0) return -1;
        int arr[size];
        for(int i=0;i<size;i++)
        {
            arr[i]=gas[i]-cost[i];
        }
        int total=0;
        int index=0;
        for(int i=0;i<size;i++)
        {
            total=arr[i]+total;
            if(total<0)
            {
                myvector.push_back(total);
                total=0;
                index=(i+1)%size;
            }
        }
        if(total>0)
            myvector.push_back(total);
        size=myvector.size();
        total=0;
        for(int i=0;i<size;i++)
        {
            total=myvector[i]+total;
        }
        if(total<0)
        {
            return -1;
        }
        else
        {
            return index;
        }
        
    }
};