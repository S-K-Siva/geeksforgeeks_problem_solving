class Solution {
  public:
    void mm(char dir, vector<vector<int>>& mat, vector<vector<int>>& vis,
            vector<int>& result, int i, int j, int n, int m, int cnt) {
        if (cnt > n * m || vis[i][j]) return; 
    
        vis[i][j] = 1; 
        result.push_back(mat[i][j]);
    
        if (dir == 'R') {
            if (j + 1 < m && !vis[i][j + 1]) {
                mm('R', mat, vis, result, i, j + 1, n, m, cnt + 1);
            } else if (i + 1 < n && !vis[i + 1][j]) {
                mm('D', mat, vis, result, i + 1, j, n, m, cnt + 1);
            }
        } else if (dir == 'D') {
            if (i + 1 < n && !vis[i + 1][j]) {
                mm('D', mat, vis, result, i + 1, j, n, m, cnt + 1);
            } else if (j - 1 >= 0 && !vis[i][j - 1]) {
                mm('L', mat, vis, result, i, j - 1, n, m, cnt + 1);
            }
        } else if (dir == 'L') {
            if (j - 1 >= 0 && !vis[i][j - 1]) {
                mm('L', mat, vis, result, i, j - 1, n, m, cnt + 1);
            } else if (i - 1 >= 0 && !vis[i - 1][j]) {
                mm('U', mat, vis, result, i - 1, j, n, m, cnt + 1);
            }
        } else if (dir == 'U') {
            if (i - 1 >= 0 && !vis[i - 1][j]) {
                mm('U', mat, vis, result, i - 1, j, n, m, cnt + 1);
            } else if (j + 1 < m && !vis[i][j + 1]) {
                mm('R', mat, vis, result, i, j + 1, n, m, cnt + 1);
            }
        }
    }

    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        vector<int> res;
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        mm('R',mat,vis,res,0,0,n,m,1);
        return res;
    }
};
