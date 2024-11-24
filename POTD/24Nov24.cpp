class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        if(arr.size() == 0) return 0;
        int maxSum = arr[0];
        int n = arr.size();
        int currentSum = arr[0];
        for(int i = 1;i<n;i++){
            currentSum = max(arr[i],arr[i] + currentSum);
            
            maxSum = max(maxSum,currentSum);
        }
        return maxSum;
    }
};
