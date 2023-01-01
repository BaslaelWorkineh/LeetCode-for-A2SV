class Solution {
public:
    string largestNumber(vector<int> &num) {
        vector<string> arr;
        for(auto i:num)
            arr.push_back(to_string(i));
        sort(begin(arr), end(arr), [](string &s1, string &s2){ return s1+s2>s2+s1; });
        string ans;
        for(auto s:arr)
            ans+=s;
        while(ans[0]=='0' && ans.length()>1)
            ans.erase(0,1);
        return  ans;
    }
};
