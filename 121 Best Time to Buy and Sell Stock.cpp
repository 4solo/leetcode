class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> profit;
        int size=prices.size();
        if(size==0)
        {
            return 0;
        }
        else if (size==1)
        {
            return 0;
        }
        for(int i=1;i<size;i++)
        {
            profit.push_back(prices[i]-prices[i-1]);
        }
        size=profit.size();
        int max1=profit[0];
        int total=profit[0];
        for(int i=1;i<size;i++)
        {
            if(total<0)
            {
                total=profit[i];
            }
            else
            {
                total=total+profit[i];
            }
            max1=max(max1,total);
        }
        //max1=max(max1,total);
        if(max1<0)
        {
            return 0;
        }
        else
        return max1;
    }
};