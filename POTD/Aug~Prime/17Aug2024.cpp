#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        
        int n = nums.size();
        if(n == 1){
            return {1};
        }
        vector<long long int> left(n, 1);
        vector<long long int> right(n, 1);
    
        left[0] = nums[0];
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] * nums[i];
        }
    
        right[n - 1] = nums[n - 1];
        for (int j = n - 2; j >= 0; j--) {
            right[j] = right[j + 1] * nums[j];
        }
    
        vector<long long int> dp(n, 1);
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                dp[i] = right[i + 1];
            } else if (i == n - 1) {
                dp[i] = left[i - 1];
            } else {
                dp[i] = left[i - 1] * right[i + 1];
            }
        }
    
        return dp;
    }
};