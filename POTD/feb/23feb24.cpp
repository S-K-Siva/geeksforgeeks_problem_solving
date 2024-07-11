#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int maxProfit(vector<int>&price){
            int n = price.size();
            int maxi = price[n-1];
            vector<int> dp(n,0);
            
            for(int i = n-2;i>=0;i--){
                maxi = max(maxi,price[i]);
                dp[i] = max(maxi-price[i],dp[i+1]);
            }
            
            int mini = price[0];
            
            for(int i = 1;i<n;i++){
                mini = min(mini,price[i]);
                
                dp[i] = max(price[i]-mini+dp[i],dp[i-1]);
            }
            // for(auto it : dp){
            //     cout << it << " ";
            // }
            // cout << endl;
            return dp[n-1];
        }
};