class Solution {
  public:
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &a) {
        int n = a.size();

        int max_kadane = INT_MIN, current_max = 0;
        for (int i = 0; i < n; i++) {
            current_max = max(a[i], current_max + a[i]);
            max_kadane = max(max_kadane, current_max);
        }

        int min_kadane = INT_MAX, current_min = 0, total_sum = 0;
        for (int i = 0; i < n; i++) {
            current_min = min(a[i], current_min + a[i]);
            min_kadane = min(min_kadane, current_min);
            total_sum += a[i];
        }

        if (total_sum == min_kadane) {
            return max_kadane;
        }

        return max(max_kadane, total_sum - min_kadane);
    }
};
