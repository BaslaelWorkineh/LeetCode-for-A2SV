class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) 
    {
        int count = 0, n = arr.size(), modu = 1e9+7;
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++)
        {
            count = (count + (mp[target-arr[i]])) % modu;
            for(int j=0; j<i; j++)
            {
                mp[arr[i] + arr[j]]++;
            }
        }
        return count;
        
    }
};
