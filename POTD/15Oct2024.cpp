class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        map<int,int> mm;
        int ans = 0;
        int cur = 0;
        for(auto it : arr){
            cur += it;
            if(cur == tar) ans++;
            if(mm[cur-tar]) ans += mm[cur-tar];
            ++mm[cur];
        }
        
        return ans;
    }
};
