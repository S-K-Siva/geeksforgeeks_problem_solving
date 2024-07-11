#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
class Solution {
  public:
    long long int numberOfPaths(int m, int n){
        //memo
        vector<vector<long long int>> dp(m, vector<long long int>(n,0));
        // Bottom up approach DP
        for(int i = 1;i<m;i++){
            dp[i][0] = 1;
        }
        for(int i = 1;i<n;i++){
            dp[0][i] = 1;
        }

        for(int i = 1;i<m;i++){
            for(int j = 1;j<n;j++){
                dp[i][j] = (dp[i-1][j]%mod + dp[i][j-1]%mod)%mod;
            }
        }
        
        return dp[m-1][n-1]%mod;
        
        
    }
};