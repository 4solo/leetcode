class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        height.push_back(0);
        int maxnum=0;
        int size=height.size();
        stack<int> mystack;
        for(int i=0;i<size;i++)
        {
            if(mystack.empty()||height[i]>height[mystack.top()])
            {
                mystack.push(i);
            }
            else
            {
                int temp=mystack.top();
                mystack.pop();
                maxnum=max(maxnum,height[temp]*(mystack.empty()?i:i-mystack.top()-1));
                i--;
            }
        }
        return maxnum;
    }
};