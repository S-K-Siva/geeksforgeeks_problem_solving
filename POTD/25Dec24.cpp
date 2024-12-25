class Solution {
public:
    void setMatrixZeroes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        
        int trackRowOne = 0;
        int trackColOne = 0;
        for(int i = 0;i<m;i++){
            if(mat[0][i] == 0) trackRowOne = 1;
        }
        for(int i = 0;i<n;i++){
            if(mat[i][0] == 0) trackColOne = 1;
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (mat[i][j] == 0) {
                    mat[0][j] = 0;
                    mat[i][0] = 0;
                }
            }
        }
        for(int i = 1;i<n;i++){
            for(int j = 1;j<m;j++){
                if(mat[i][0] == 0 || mat[0][j] == 0){
                    mat[i][j] = 0;
                }
            }
        }
        if(trackRowOne){
            for(int i = 0;i<m;i++){
                mat[0][i] = 0;
            }
        }
        if(trackColOne){
            for(int i = 0;i<n;i++){
                mat[i][0] = 0;
            }
        }
    }
};
