class MinStack {
    stack<int> s;
    stack<int> ss;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(ss.empty() || val <= ss.top()) ss.push(val);
    }
    
    void pop() {
        int ans = s.top();
        s.pop();
        if(ans == ss.top()) ss.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        if(s.empty()) return -1;
        return ss.top();
    }
};
