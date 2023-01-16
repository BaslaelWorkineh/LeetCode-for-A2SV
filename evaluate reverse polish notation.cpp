class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(string c:tokens)
        {
            if(c == "/")
            {
                int temp = st.top();
                st.pop();
                int divide = st.top() / temp;
                st.pop();
                st.push(divide);
            }
            else if (c == "*")
            {
                int temp = st.top();
                st.pop();
                int mult = st.top() * temp;
                st.pop();
                st.push(mult);
            }
            else if (c == "-")
            {
                int temp = st.top();
                st.pop();
                int minus = st.top() - temp;
                st.pop();
                st.push(minus);
            }
            else if (c == "+")
            {
                int temp = st.top();
                st.pop();
                int add = st.top() + temp;
                st.pop();
                st.push(add);
            }
            else
            {
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};
