class Solution {

    void flipArr(vector < int >& arr, int idx) {

        int i = 0, j = idx - 1;

        while ( i < j ) swap(arr[i++], arr[j--]);

        return;

    }

public:
    vector<int> pancakeSort(vector<int>& arr) {
        
        vector < int > ans;
        int n = arr.size();

        while ( arr.size() ) {

            n = arr.size();
            int maxIdx = max_element(arr.begin(), arr.end()) - arr.begin();

            flipArr(arr, maxIdx + 1);
            // for ( auto i : arr ) cout << i << " ";
            // cout << "\n";
            ans.push_back(maxIdx + 1);

            flipArr(arr, n);

            ans.push_back(n);

            arr.pop_back();

        }

        return ans;

    }
};
