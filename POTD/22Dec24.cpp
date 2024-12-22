class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int s = mat[0].size();
        for(int i = 1;i<n;i++){
            mat[0].insert(mat[0].end(),mat[i].begin(),mat[i].end());
        }
        sort(mat[0].begin(),mat[0].end());
        
        int low = 0;
        int high = mat[0].size()-1;
        
        vector<int> in = mat[0];
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(in[mid] == x) return true;
            else if(in[mid] > x){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return false;
    }
};
