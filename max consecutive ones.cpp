class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        vector<int> zeroes ; 
        zeroes.push_back(-1) ;
        for(int i = 0 ; i< nums.size() ; ++i) {
            if (nums[i] == 0) zeroes.push_back(i) ;
            
        }
        zeroes.push_back(nums.size()) ;
        if (k >= zeroes.size() - 2) return nums.size() ;
        int start = 0  ;
        int end = k + 1 ;
        int m = 0 ;
        while (end < zeroes.size()) {
            m = max( m , zeroes[end] - zeroes[start] - 1) ;
            start++ ;
            end++ ;
        }
        return m ;
    }
};
