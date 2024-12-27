class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        unordered_map<int,int> track;
        int res = 0;
        for(auto it : arr){
            if(track[target-it]){
                res += track[target-it];
                
            }
            
                ++track[it];
            
        }
        return res;
    }
};
