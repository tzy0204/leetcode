/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
    // use two stack to store the data
    // one stack is the normal stack
    // the other stack is the min stack
    // the top of the min stack is the min value of the normal stack
    // when push a new value, if the new value is smaller than the top of the min stack, push the new value to the min stack
    // when pop a value, if the value is the top of the min stack, pop the top of the min stack
    // when getMin, return the top of the min stack
class MinStack {
    // int min = INT32_MAX;
    stack <int> s;
    stack <int> mStack;
public:
    MinStack() {
        mStack.push(INT32_MAX);
    }
    
    void push(int val) {
        s.push(val);
        // update min value if pushed value is smaller than curret min value
        if (val <= mStack.top()) mStack.push(val);
    }
    
    void pop() {
        int val = s.top();
        s.pop();
        // update min value if pop value is equeal min value
        if (val == mStack.top()) {
            mStack.pop();            
        }
        
    }
    
    int top() {
        return s.top();        
    }
    
    int getMin() {
        return mStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

