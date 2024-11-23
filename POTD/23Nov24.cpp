class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) {
        int n = arr.size();
        if (n == 1) return 0;
        sort(arr.begin(), arr.end());
        int minDiff = arr[n - 1] - arr[0];
    
        for (int i = 0; i < n - 1; i++) {
            int maxHeight = max(arr[i] + k, arr[n - 1] - k);
            int minHeight = min(arr[0] + k, arr[i + 1] - k);
    
            
    
            minDiff = min(minDiff, abs(maxHeight - minHeight));
        }
    
        return minDiff;
        
    }
};
