#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        if(!arr.size()) return 0LL;
        long long result = arr[0];
        long long current = arr[0];
        int n = arr.size();
        for(int i = 1;i<n;i++){
            long long el1 = (long long)arr[i];
            long long el2 = (long long)arr[i] + current;
            
            current = max(el1,el2);
            if(current > result)
                result = current;
        }
        
        return result;
    }
};
