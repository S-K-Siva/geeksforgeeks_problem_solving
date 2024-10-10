class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        map<int,vector<int>> mpp;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            mpp[arr[i]].push_back(i);
        }
        
        int maxDiff = 0;
        for(auto it : mpp){
            maxDiff = max(maxDiff, abs(it.second.front() - it.second.back()));
        }
        
        return maxDiff;
    }
};
