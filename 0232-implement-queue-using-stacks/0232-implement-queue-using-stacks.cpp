class MyQueue {
public:
    stack<int>pushStack;
    stack<int>popStack;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        pushStack.push(x);
    }
    
    int pop() {
        // All we do is put all items from the pushStack into the popStack.
        if(popStack.empty())
        {
            while(!pushStack.empty())
            {
                auto it = pushStack.top();
                popStack.push(it);
                pushStack.pop();
            }
        }
        /*
     * If we now have elements to pop then pop the item.
     * 
     * If the popStack is empty by this point then the overarching queue is empty.
     * 
     * Throw an exception seems to make the most sense. Returning -1 would be
     * misleading since that is a valid return value.
     */
        if(!popStack.empty())
        {
            int x = popStack.top();
            popStack.pop();
            return x;
        }
        
    /*
     * We assume all valid operations as the problem description says... Here we
     * would handle an empty queue...I wouldn't return -1 becuase that'd be a
     * misleading value since it is a valid int (and entries could be
     * negative)...but we have to since the function returns an int and we can't
     * compile without a default return statement
     */
        
        return -1;
    }
    
    int peek() {
     /*
     * Ensure that the pop stack has an item to peek
     */
        if(popStack.empty())
        {
            while(!pushStack.empty())
            {
                auto it = pushStack.top();
                popStack.push(it);
                pushStack.pop();
            }
        }
        
    /*
     * Pop the item if the queue is not empty
     */
         if(!popStack.empty())
        {
           return popStack.top();
        }
        
         // Again...I'd throw an exception here. Returning -1 might be misleading.
    // But...we have to return -1 to compile
        
        return -1;
        
    }
    
    bool empty() {
         return pushStack.empty() && popStack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */