class Solution {
  public:
    long long maxSum(vector<int>& arr) {
      sort(arr.begin(), arr.end());
  
      vector<int> a;
      int n = arr.size();
      int left = 0, right = n - 1;
  
      while (left <= right) {
          if (left == right) {
              a.push_back(arr[left]);
              break;
          }
          a.push_back(arr[right--]);
          a.push_back(arr[left++]);
      }
  
      long long result = 0;
      for (int i = 0; i < n - 1; i++) {
          result += abs(a[i] - a[i + 1]);
      }
      result += abs(a[n - 1] - a[0]);
  
      return result;
  }
};
