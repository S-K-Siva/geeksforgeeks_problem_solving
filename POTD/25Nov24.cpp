class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        int n = arr.size();
        if(n == 0) return 0;
        int result = arr[0];
        int maxi = arr[0];
        int mini = arr[0];
        for(int i = 1;i<n;i++){
            if(arr[i] < 0){
                swap(maxi,mini);
            }
            
            maxi = max(arr[i], arr[i] * maxi);
            mini = min(arr[i], arr[i] * mini);
            
            result = max(result, maxi);
        }
        
        return result;
        
    }
};
