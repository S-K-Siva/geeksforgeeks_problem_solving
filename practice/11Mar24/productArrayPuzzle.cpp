#include<bits/stdc++.h>
using namespace std;

// The problem where we need to keep track of prefix and suffix...
class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        long long int temp = 1;
        
        
        vector<long long int> result(n,1);
        
        // for(int i = 0;i<n;i++){
        //     result[i] = temp;
        //     temp *= nums[i];
        // }
        
        
        // temp = 1;
        
        // for(int i = n-1;i>-1;i--){
        //     result[i] *= temp;
        //     temp *= nums[i];
        // }
        
        // return result;
        long long int track = nums[0];
        for(int i = 1;i<n;i++){
            result[i] = track;
            track *= nums[i];
        }
        track = nums[n-1];
        for(int i = n-2;i>-1;i--){
            result[i] *= track;
            track *= nums[i];
        }
        
        return result;
    }
};