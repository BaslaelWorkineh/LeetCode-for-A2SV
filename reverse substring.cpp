class Solution {
public:
    string reverseParentheses(string s) {
        stack<pair<char,int>> st;
        for(int i=0;i<s.size();i++)
        {
            if( s[i]=='(')
            {
                st.push({s[i],i});
            }
            else if(!st.empty() && s[i]==')' && st.top().first=='(')
            {
                reverse(s.begin()+st.top().second,s.begin()+i);
                st.pop();
            }

        }
        string  str;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]==')')
            continue;
            else
            str.push_back(s[i]);
        }
        return str;
    }
};
