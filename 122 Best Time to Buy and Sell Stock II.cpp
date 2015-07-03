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
        int total=0;
        for(int i=0;i<size;i++)
        {
            if(profit[i]>0)
            {
                total=total+profit[i];
            }
        }
        return total;
    }
};