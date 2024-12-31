class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& Arr) {
        
        int curr = 1;
        
        int maxi = 1;
        
        
        set<int> vals(Arr.begin(),Arr.end());
        vector<int> arr(vals.begin(),vals.end());
        int n = arr.size();
        for(int i = 1;i<n;i++){
            if(arr[i] - arr[i-1] == 1)
            {
                ++curr;
            }else{
                maxi = max(maxi,curr);
                curr = 1;
            }
        }
        maxi = max(maxi,curr);
        return maxi;
    }
};
