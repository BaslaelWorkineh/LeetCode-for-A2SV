class Solution {
public:
int anss(vector<int>& nums, int k){
        int n = nums.size();
        vector<int> v(100001,0);
        int diff = 0;
        int j = 0;
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]%2){
                v[nums[i]]++;
                diff++;
            }
            if(diff <= k){
                ans += (i-j+1);
            }else{
                while(j < n && j <= i && diff > k){
                    if(nums[j]%2 == 1){
                        v[nums[j]]--;
                        diff--;
                        
                    }
                    j++;
                }
                ans += (i-j +1);
            }
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return (anss(nums,k) - anss(nums,k-1)) ;
    }
};
