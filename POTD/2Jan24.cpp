class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        unordered_map<int,int> track;
        track[0] = 1;
        
        int prefixSum = 0;
        int cnt = 0;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            prefixSum += arr[i];
            if(track.find(prefixSum - k) != track.end()){
                cnt += track[prefixSum - k];
            }
            ++track[prefixSum];
        }
        return cnt;
    }
};
