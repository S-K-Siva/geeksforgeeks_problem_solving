#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		int nthStair(int n){
		    vector<int> dp;
		    dp = {1,2};
		    
		    if(n == 0) return 0;
		    if(n == 1 || n == 2) return dp[n-1];
		    
		    for(int i = 2;i<n;i++){
		        dp.push_back(dp[i-2] + 1);
		    }
		    
		    return dp[n-1];
		}
};
