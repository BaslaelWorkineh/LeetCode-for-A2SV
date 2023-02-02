class Solution {
public:
   int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        int L1 = 0, M1 = 0, M2 = 0, L2 = 0;        
        int n = nums.size();

        for(int i = 0; i < firstLen; i++) {
            L1 += nums[i];
        }

        for(int i = firstLen; i < firstLen + secondLen; i++) {
            M1 += nums[i];
        }

        for(int i = n - firstLen; i < n; i++) {
            L2 += nums[i];
        }

        for(int i = n - firstLen - secondLen; i < n - firstLen; i++) {
            M2 += nums[i];
        }
        
        int lmax = L1, rmax = L2, res = max(L1 + M1, L2 + M2);
        for(int i = firstLen + secondLen; i < n; i++) {

            L1 += nums[i - secondLen] - nums[i - secondLen - firstLen];
            M1 += nums[i] - nums[i - secondLen];
            
            
            lmax = max(L1, lmax);
            res = max(res, lmax + M1);
            L2 += nums[n - i - 1 + secondLen] - nums[n - i + firstLen + secondLen - 1];
            M2 += nums[n - i - 1] - nums[n - i + secondLen - 1];
            
            rmax = max(L2, rmax);
            res = max(res, rmax + M2);
        }
        return res;  
    }
};
