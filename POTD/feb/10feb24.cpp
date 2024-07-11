#include<bits/stdc++.h>
using namespace std;

// Recursion Approach
// class Solution {
// public:
//     void helper(vector<vector<int>> &result,vector<vector<int>>& arr,vector<int>&s, int row,int col,int total,int k,int n){
//         if(row >= n || col >= n) return;
//         if(total > k) return;
//         if(total == k && col != n-1 && row != n-1) return;
//         if(row == n-1 && col == n-1){
//             if(total+arr[row][col] == k){
//                 result.push_back(s);
//             }
//             return;
//         }
//         s.push_back(arr[row][col]);
//         helper(result,arr,s,row+1,col,total+arr[row][col],k,n);
        
//         helper(result,arr,s,row,col+1,total+arr[row][col],k,n);
//         s.pop_back();
//     }
//     long long numberOfPath(int n, int k, vector<vector<int>> &arr){
//         vector<vector<int>> result;
//         vector<int> st;
//         helper(result,arr,st,0,0,0,k,n);
//         return (long long) result.size();
//     }
// };

// Dynamic Programming Approach - Optimised
class Solution {
public:
    
    long long numberOfPath(int n, int k, vector<vector<int>> arr){
        int dr[] = {1, 0};
        int dc[] = {0, 1};
                 // D, R
        
        auto valid = [&](int x, int y) -> bool {
            if(x < 0 or x >= n or y < 0 or y >= n)
                return 0;
                
            return 1;
        };
        
        vector<vector<vector<long long>>> dp(n, vector<vector<long long>> (n, vector<long long> (k + 1, -1)));
        
        function<long long(int, int, int)> helper = [&](int r, int c, int sum) -> long long {
            if(r == n - 1 and c == n - 1){
                return dp[r][c][sum] = sum == arr[r][c];
            }
            
            if(dp[r][c][sum] != -1)
                return dp[r][c][sum];
            
            dp[r][c][sum] = 0;
                
            if(arr[r][c] <= sum){
                for(int dir = 0; dir < 2; dir++){
                    int nr = r + dr[dir];
                    int nc = c + dc[dir];
                    
                    if(valid(nr, nc))
                        dp[r][c][sum] += helper(nr, nc, sum - arr[r][c]);
                }            
            }
            
            return dp[r][c][sum];
        };
        
        return helper(0, 0, k);
    }
};