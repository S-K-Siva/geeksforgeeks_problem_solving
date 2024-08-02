#include<bits/stdc++.h>
using namespace std;

/*
 Still Dp Practice not started !
*/
class Solution {
  public:
  
    // Brute Force ~ Few edge cases are failing...
    // int editDistance(string str1, string str2) {
    //     int length1 = 0,length2 = 0;
        
    //     length1 = str1.size();
    //     length2 = str2.size();
        
    //     int minL = min(length1,length2);
    //     sort(str1.begin(),str1.end());
    //     sort(str2.begin(),str2.end());
    //     unordered_map<char,int> mpp;
    //     for(int i = 0;i<str2.size();i++){
    //         ++mpp[str2[i]];
    //     }
    //     int cnt = 0;
    //     for(int i = 0;i<str1.size();i++){
    //         if(!mpp[str1[i]]) cnt++;
    //         else{
    //             if(mpp[str1[i]] == 1){
    //                 mpp.erase(str1[i]);
    //             }else if(mpp[str1[i]]){
    //                 --mpp[str1[i]];
    //             }else{
    //                 cnt++;
    //             }
    //         }
    //     }
        
    //         for(auto it : mpp)
    //         {
    //             cnt += it.second;
    //         }
        
    //     if(length1 > length2)
    //         cnt -= abs(length1 - length2);
    //     return cnt;
    // }
    
    // Optimal DP :(
    int editDistance(string str1, string str2) {
        // Code here
        int n=str1.size(),m=str2.size();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            dp[i][0]=i;
        }
        for(int j=0;j<=m;j++){
            dp[0][j]=j;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=1+min({dp[i-1][j-1],dp[i][j-1],dp[i-1][j]});
                }
            }
        }
        return dp[n][m];
    }
};