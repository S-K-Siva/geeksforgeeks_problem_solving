#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to count number of ways to reach the nth stair
    // when order does not matter.
    long long countWays(int n) {
        // vector<int> dp(n+1,0);
        
        // dp[0] = 1;
        // dp[1] = 1;
        // for(int i = 2;i<=n;i++){
        //     dp[i] = dp[i-2]+1;
        // }
        // return dp[n];
        //most optimal solution
        
        return (long long)(n/2)+1;
    }
};