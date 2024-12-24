class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        
        for(int i = 1;i<n;i++){
            mat[0].insert(mat[0].end(),mat[i].begin(),mat[i].end());
        }
        
        vector<int> arr = mat[0];
        sort(arr.begin(),arr.end());
        int high = arr.size() - 1;
        int low = 0;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(arr[mid] == x){
                return true;
            }else if(arr[mid] > x){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return false;
    }
};
