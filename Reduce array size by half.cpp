class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size(); 
        sort(arr.begin(), arr.end());
        vector<int> freq;
        
        int i = 0;
        
        while(i < n)
        {
            int count = 1;
            
            while(i < n - 1 && arr[i] == arr[i + 1])
            {
                count++;
                
                i++;
            }
            
            freq.push_back(count);
            
            i++;
        }
        sort(freq.begin(), freq.end());
        int curr_sum = 0;
        
        i = freq.size() - 1;

        int count = 0;
        
        while(i >= 0)
        {
            curr_sum += freq[i];
            count++;
            if(curr_sum >= n / 2)
                break;
            i--;
        }
        return count;
    }
};
