class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // int maxReturn = INT_MIN;
        // int n = prices.size();
        // for(int i = 0;i<n;i++)
        // {
        //     for(int j = i + 1;j<n;j++){
        //         if(prices[i] <= prices[j]){
        //             maxReturn = max(maxReturn, prices[j] - prices[i]);
        //         }
        //     }
        // }
        
        // return maxReturn == INT_MIN ? 0 : maxReturn;
        
        // optimized
        
        int maxReturn = 0;
        int minPrice = INT_MAX;
        int n = prices.size();
        if(n < 2) return 0;
        
        for(int i = 0;i<n;i++){
            minPrice = min(minPrice, prices[i]);
            
            int profit = prices[i] - minPrice;
            
            maxReturn = max(maxReturn, profit);
        }
        return maxReturn;
    }
};
