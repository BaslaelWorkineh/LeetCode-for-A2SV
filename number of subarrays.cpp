class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i = 0;
        int j = k - 1;
        int mx;
        int subCnt = 0;
        int sum = 0;
        if(k == threshold) return 1;
        for(int n = 0; n < k; n++)
        {
            sum += arr[n];
        }

        if(sum/k > threshold) subCnt++;
        mx = subCnt;
        cout <<sum;

        while(j < arr.size() - 1 )
        {
            j++;
            sum += arr[j];
            sum -= arr[i];
            i++;
            //cout <<subCnt<<endl;
           //cout <<j<<endl;
            //cout <<i<<endl;
            if(sum/k >= threshold) subCnt++;
            mx = max(mx, subCnt);
        }

        return mx;
    }
};
