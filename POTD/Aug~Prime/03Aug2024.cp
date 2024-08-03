class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    // int celebrity(vector<vector<int> >& mat) {
    //     if(mat.size() == 1){
    //         return 0;
    //     }
    //     int m = mat.size();
    //     int n = mat[0].size();
    //     unordered_map<int,set<int>> track;
        
    //     for(int i = 0;i<m;i++){
    //         for(int j = 0;j<n;j++){
    //             if(i == j) continue;
    //             if(mat[i][j] == 1){
    //                 if(track[j].size()){
    //                     track[j].insert(i);
    //                 }else{
    //                     set<int> ss;
    //                     ss.insert(i);
    //                     track[j] = ss;
    //                 }
    //             }
    //         }
    //     }
        
    //     int res = -1;
        
    //     for(auto it : track){
    //         if(it.second.size() == m-1){
    //             return it.first;
    //         }
    //     }
        
    //     return res;
        
    // }
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        
        // Step 1: Find the candidate
        int candidate = 0;
        for (int i = 1; i < n; i++) {
            if (mat[candidate][i] == 1) {
                candidate = i; // candidate cannot be the celebrity
            }
        }
        
        // Step 2: Verify the candidate
        for (int i = 0; i < n; i++) {
            if (i != candidate) {
                // The candidate should not know i and i should know the candidate
                if (mat[candidate][i] == 1 || mat[i][candidate] == 0) {
                    return -1;
                }
            }
        }
        
        return candidate;
    }
    

};