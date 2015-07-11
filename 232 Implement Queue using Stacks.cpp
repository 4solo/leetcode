class Queue {
public:
    // Push element x to the back of queue.
    void push(int x) {
        while(!mystack.empty())
        {
            temp.push(mystack.top());
            mystack.pop();
        }
        temp.push(x);
        while(!temp.empty())
        {
            mystack.push(temp.top());
            temp.pop();
        }
    }

    // Removes the element from in front of queue.
    void pop(void) {
        return mystack.pop();
    }

    // Get the front element.
    int peek(void) {
        return mystack.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return mystack.empty();
    }
private:
stack<int> mystack;
stack<int> temp;
};