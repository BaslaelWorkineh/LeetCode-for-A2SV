class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int mx = 0;
        int zeroCnt = 0;

        while(j < nums.size())
        {
            if(nums[j] == 0) zeroCnt++;
            if(zeroCnt > 1)
            {
                if(nums[i] == 0) zeroCnt--;
                i++;
            }
            j++;
            mx = max(mx, j - i - 1);
        }
        return mx;
    }
};
