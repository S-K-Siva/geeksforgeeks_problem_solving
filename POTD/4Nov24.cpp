class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        int n = arr.size();
        
        vector<vector<int>> result;
        
        
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                for(int k = j + 1;k<n;k++){
                    if(arr[i] + arr[j] + arr[k] == 0){
                        result.push_back({i,j,k});
                    }
                }
            }
        }
        return result;
    }
};
