class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        int res = 0;
        for(auto it : arr){
            if(it%k == 0){
                res += it/k;
            }else{
                res += (it/k)+1;
            }
        }
        return res;
    }
};
