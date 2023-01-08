class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            {
                count++;
            }
        }
      for(int i=0;i<nums.size();i++)
      {
                if(nums[i]== 0)
                {
                    count--;
                    nums.erase(nums.begin()+i);
                    nums.push_back(0);
                    i--;
                }
                if(count == 0)
                break;
      }
    }
};
