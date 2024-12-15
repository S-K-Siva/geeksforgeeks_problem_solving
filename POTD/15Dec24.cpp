class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();
        for(int i = 1;i<n-1;i++)
        {
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) return i;
        }
        
        if(n == 2){
            return arr[0] > arr[1] ? 0 : 1;
        }
        return n-1;
    }
};
