class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        if(size<2) return 0;
        int arr[size];
        arr[0]=0;
        int minnum=0x7fffffff;
        int maxnum=0;
        for(int i=1;i<size;i++)
        {
            minnum=min(minnum,prices[i-1]);
            //maxnum=max(maxnum,prices[i]);
            arr[i]=max(prices[i]-minnum,arr[i-1]);
        }
        minnum=0x7fffffff;
        maxnum=0x80000000;
        int prev=0x80000000;
        for(int i=size-1;i>0;i--)
        {
            maxnum=max(maxnum,prices[i]);
            prev=max(prev,maxnum-prices[i-1]);
            arr[i-1]=arr[i-1]+prev;
        }
        
        int result=0;
        for(int i=0;i<size;i++)
        {
            result=max(result,arr[i]);
        }
        return result;
    }
};