class MinStack {
public:
    MinStack()
    {
    }
    void push(int x) {
        arr.push(x);
        if(Min>x)
        {
            Min=x;
        }
        Minarr.push(Min);
    }

    void pop() {
        int temp;
        if(!arr.empty())
        {
            temp=arr.top();
        }
        Minarr.pop();
        arr.pop();
        if(Min==temp&&!Minarr.empty())
        {
            Min=Minarr.top();
        }
        if(Minarr.empty())
        {
            Min=2147483647;
        }
    }

    int top() {
        return arr.top();
    }

    int getMin() {
        return Minarr.top();
    }
private:
    int Min=2147483647;
    stack<int> arr;
    stack<int> Minarr;
};