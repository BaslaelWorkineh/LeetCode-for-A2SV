class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start =0;
        int end =0;
        int Max =0;
        set<char> Set;
        while(start<s.length()){
            auto it=Set.find(s[start]);
            if(it==Set.end()){
                int l=start-end+1;
                Max=max(Max,l );
                 Set.insert(s[start]);
                
                start++;
               
            }else{
                Set.erase(s[end]);
                end++;
            }
        }
       
        return Max;
    }
    
};
