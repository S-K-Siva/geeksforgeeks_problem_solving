class Solution {
  public:
    int getSingle(vector<int>& arr) {
        int res = 0;
        for(auto it : arr){
            res ^= it;
        }
        return res;
    }
};
