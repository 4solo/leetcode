class Stack {
public:
    // Push element x onto stack.
    void push(int x) {
        while(!myqueue.empty())
        {
            temp.push(myqueue.front());
            myqueue.pop();
        }
        myqueue.push(x);
        while(!temp.empty())
        {
            myqueue.push(temp.front());
            temp.pop();
        }
    }

    // Removes the element on top of the stack.
    void pop() {
        return myqueue.pop();
    }

    // Get the top element.
    int top() {
        return myqueue.front();
    }

    // Return whether the stack is empty.
    bool empty() {
        return myqueue.empty();
    }
private:
    queue<int> myqueue;
    queue<int> temp;
};