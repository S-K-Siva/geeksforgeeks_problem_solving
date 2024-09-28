class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
        int result = 0;
        int n = arr.size();
        vector<int> dp(n,INT_MAX);
        dp[0] = 0;
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<=i+k && j< n;j++){
                dp[j] = min(dp[j],dp[i] + abs(arr[i]-arr[j]));
            }
        }
        
        // for(auto it : dp){
        //     cout << it << " ";
        // }cout << endl;
 
        return dp[n-1];
    }
};
