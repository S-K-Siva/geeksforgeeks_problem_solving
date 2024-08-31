#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // TLE , 1110/1115 
    // vector<int> find3Numbers(vector<int> &arr) {
    //     int n = arr.size();
    //     vector<int> dp(n,1);
        
    //     for(int i = 1;i<n;i++)
    //     {
    //         int j = i-1;
    //         while(j>=0){
    //             if(arr[j] < arr[i]){
    //                 dp[i] = max(dp[j]+1,dp[i]);
    //             }
    //             j--;
    //         }
    //     }
        
    //     int number = 3;
    //     vector<int> result;
    //     for(int i = n-1;i>-1;i--){
    //         if(number <= 0) break;
    //         if(dp[i] == number){
    //             result.push_back(arr[i]);
    //             number--;
    //         }
    //     }
    //     reverse(result.begin(),result.end());
    //     return result;
    // }
    
    vector<int> find3Numbers(vector<int> &arr){
        int n = arr.size();
        
        vector<int> leftDp(n,-1);
        vector<int> rightDp(n,-1);
        
        for(int i = 1;i<n;i++){
            int j = i-1;
            while(j>=0){
                if(arr[j] < arr[i]){
                    leftDp[i] = j;
                    break;
                }
                j--;
            }
        }
        
        for(int i = n-2;i>=0;i--){
            int j = i+1;
            while(j<n){
                if(arr[i] < arr[j]){
                    rightDp[i] = j;
                    break;
                }
                j++;
            }
        }
        
        for(int i = 0;i<n;i++){
            if(leftDp[i] != -1 && rightDp[i] != -1){
                return { arr[leftDp[i]] , arr[i], arr[rightDp[i]] };
            }
        }
        
        return {};
    }
    
};
