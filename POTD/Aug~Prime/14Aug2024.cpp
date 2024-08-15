#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int result = 0;
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(str1[i-1] == str2[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                    result = max(result, dp[i][j]);
                }else{
                    // it's not contiguous
                    dp[i][j] = 0;
                }
            }
        }
        return result;
    }
};