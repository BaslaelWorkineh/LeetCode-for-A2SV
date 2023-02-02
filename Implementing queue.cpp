class MyQueue {
public:
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        pushfunc(x);
    }
    void pushfunc(int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        int data=st.top();
        st.pop();
        pushfunc(x);
        st.push(data);
    }
    
    int pop() {
        int x=st.top();
        st.pop();
        return x;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
    }
};
Console
