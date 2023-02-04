class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ln= nums.size();
        vector<int> leftToRight={nums[0]}, rightToLeft= {nums.back()};
        
        for(int i=1,j= ln-2;j>=0;i++,j--){
            leftToRight.push_back(nums[i]*leftToRight.back());
            rightToLeft.push_back(nums[j]*rightToLeft.back());
        }
        
        reverse(rightToLeft.begin(),rightToLeft.end());
        
        
        for(int i=0;i<ln;i++){
            nums[i]= ((i-1>=0)?leftToRight[i-1]:1) * ((i+1<ln)?rightToLeft[i+1]:1);
        }
        
        return nums;
    }
};
