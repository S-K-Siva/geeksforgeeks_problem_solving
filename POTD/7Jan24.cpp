class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int cnt = 0;
        unordered_map<int,int> mpp;
        
        for(auto it : arr){
            if(mpp.find(target-it) != mpp.end()){
                cnt += mpp[target-it];
            }
            ++mpp[it];
        }
        return cnt;
    }
};
