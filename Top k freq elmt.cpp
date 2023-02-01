class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        map <int,int> m1;
        
        for(int i = 0; i < nums.size(); i++){
            m1[nums[i]]++;
        }
        vector<int> counts = {};

        for(auto it = m1.begin(); it != m1.end(); it++){
            counts.push_back(it->second);
        }
        sort(counts.begin(),counts.end());
        reverse(counts.begin(),counts.end());

        vector<int> ans = {};
        int a = 0;

        while(ans.size() != k){
            for(auto it = m1.begin(); it != m1.end(); it++){
                if(it->second == counts[a] && a < k){
                    ans.push_back(it->first);
                    a++;
                }
            }
        }
        return ans;
    }
};
