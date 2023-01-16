class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {

        sort(nums.begin(), nums.end(), [](string& a , string& b)
        {
            if(a.length() == b.length())
            {
                return a < b;
            }
            else
            {
                return a.length() < b.length();
            }
        });

        return nums[nums.size()-k];
        
    }
};
