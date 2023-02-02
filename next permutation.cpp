class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k, l, n=nums.size();

        for(k=n-2;k>-1;k--){
            if(nums[k]<nums[k+1])
                break;
        }
        
        if(k<0) 
            reverse(nums.begin(), nums.end());

        else{
            for(l=n-1;l>k;l--){
                if(nums[k]<nums[l])
                    break;
            }
            swap(nums[k], nums[l]);
            reverse(nums.begin()+k+1, nums.end());
        }
    }
};
